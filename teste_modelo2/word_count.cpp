#include <iostream>
#include <fstream>
#include <sstream>
#include "show_file.h"

using std::string;

void word_count(const string& input_fname, const string& output_fname){
    std::ifstream iss(input_fname);
    std::ofstream oss(output_fname);
    string linha;
    string atual;
    while(std::getline(iss,linha)){
        std::istringstream sss(linha);
        int num = 0;
        while(sss>>atual){
            num++;
        }
        oss<<num<<"\n";
    }
}