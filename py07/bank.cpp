#include <iostream>
#include <fstream>
#include <vector>

int balance(const std::string& file, int month, int year){
    int res = 0;
    std::ifstream arq;
    arq.open(file);
    std::string line;

    
    while(std::getline(arq,line)){
        if(std::stoi(line.substr(3,2)) == month && std::stoi(line.substr(6,4)) == year){
            if(line[11] == 'w'){
                res -= std::stoi(line.substr(line.find(' ',line.find(' ') + 1) + 1));
            }
            else{
                res += std::stoi(line.substr(line.find(' ',line.find(' ') + 1) + 1));
            }
        }
    }
    arq.close();
    return res;
}
