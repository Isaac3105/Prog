#include <iostream>
#include <fstream>

int reader(std::ifstream &i){
    double num;
    i >> num;
    if(i.eof()){
            return -1;
        }
    else if(i.fail()){
            i.clear();
            i.ignore(1);
            return 0;
        }
    return 1;
}

int count(const std::string& fname){
    std::ifstream iss(fname);
    int state;
    int count = 0;
    while (true){
        state = reader(iss);
        if(state == -1){
            break;
        }
        count += state;
    }
    return count;
}


