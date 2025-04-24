#include <iostream>
#include <fstream>
#include <sstream>
#include "print.h" 

std::string tomenor(std::string a){
    for (size_t i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
    }
    return a;
}

void replace_word(const std::string& fname, const std::string& old_word, const std::string& new_word, const std::string& out_fname){
    std::ifstream arq(fname);
    std::ofstream arq2(out_fname);

    std::string line;
    while (std::getline(arq, line)) {
        std::istringstream iss(line);
        std::string pal;
        std::string c = "";

        while (iss >> pal) {
            if (tomenor(pal) == tomenor(old_word)) {
                arq2 << c << new_word;
            } else {
                arq2 << c << pal;
            }
            c = " ";
        }
        arq2 << '\n';
    }

    arq.close();
    arq2.close();
}
