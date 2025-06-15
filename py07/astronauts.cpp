#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "print.h"

void astronauts(const std::string& ifname, const std::string& ofname){
    std::ifstream iss(ifname);
    std::ofstream oss(ofname);
    std::string line;
    int num1;
    int num2;
    char op;
    while(std::getline(iss, line)){
        std::istringstream lss(line);
        lss >> num1 >> op >> num2;
        if((!lss.fail() && op != '/') || (!lss.fail() && op == '/' && num2 != 0)){
            switch (op){
            case '+':
                oss << num1 + num2 << std::endl;
                break;
            case '-':
                oss << num1 - num2 << std::endl;
                break;
            case '*':
                oss << num1 * num2 << std::endl;
                break;
            case '/':
                oss << num1 / num2 << std::endl;
                break;
            }
        }
    }

}