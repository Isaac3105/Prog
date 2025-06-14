#include <iostream>
#include <fstream>
#include <math.h>

double reader(std::ifstream &i){
    double num;
    i >> num;
    if(i.eof()){
            return -1;
        }
    else if(i.fail()){
            i.clear();
            i.ignore(1);
            return -73;
        }
    return num;
}

double average(const std::string& fname){
    std::ifstream iss(fname);
    double state;
    double count = 0;
    double denominator = 0;
    while (true){
        state = reader(iss);
        if(state == -1){
            break;
        }
        if(state != -73){
            count += state;
            denominator++;
        }
    }
    return count/denominator;
}
