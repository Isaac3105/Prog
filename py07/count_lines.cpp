#include <iostream>
#include <fstream>
#include <sstream>

std::string tomenor(std::string a){
    for(size_t i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
    }
    return a;
}

int count_lines(const std::string& fname, const std::string& word){
    int res = 0;
    std::ifstream arq;
    arq.open(fname);
    std::string line;
    while(getline(arq,line)){
        std::istringstream iss(line);
        std::string pal;
        while(iss >> pal){
            if(tomenor(pal) == tomenor(word)){
                res++;
                break;
            }
        }
    }
    arq.close();
    return res;
}
