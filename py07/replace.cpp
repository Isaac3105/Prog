#include <iostream>
#include <string>
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
    
    std::ifstream file(fname);
    std::ofstream file2(out_fname);
    std::string atual;
    while(std::getline(file,atual)){
        while(tomenor(atual).find(tomenor(old_word)) != std::string::npos){
            size_t index = tomenor(atual).find(tomenor(old_word));
            atual = atual.replace(index, old_word.length(),new_word);
        }
        file2 << atual << '\n';
    }
    
}
