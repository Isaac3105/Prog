#include <iostream>
#include <vector>

std:: string formats[3] = {"snake","camel","kebab"};

//s->c
void sc(std::string &a){
    while(a.find('_') != std::string::npos){
        int index = a.find('_');
        a[index + 1] = toupper(a[index + 1]);
        a.erase(index,1);
    }
}


//s->k
void sk(std::string &a){
    while(a.find('_') != std::string::npos){
        int index = a.find('_');
        a[index] = '-';
    }
}


//c->s
void cs(std::string &a){
    int nums = 0;
    std::vector<int> index;
    for(size_t i = 0; i < a.length(); i++){
        if(a[i] == toupper(a[i])){
            nums++;
            index.push_back(i);
        }
    }
    for(int i = 0; i < nums; i++){
        a[index[i] + i] = tolower(a[index[i] + i]);
        a.insert(index[i] + i,"_");
    }
}


//c->k
void ck(std::string &a){
    int nums = 0;
    std::vector<int> index;
    for(size_t i = 0; i < a.length(); i++){
        if(a[i] == toupper(a[i])){
            nums++;
            index.push_back(i);
        }
    }
    for(int i = 0; i < nums; i++){
        a[index[i] + i] = tolower(a[index[i] + i]);
        a.insert(index[i] + i,"-");
    }
}


//k->s
void ks(std::string &a){
    while(a.find('-') != std::string::npos){
        int index = a.find('-');
        a[index] = '_';
    }
}


//k->c
void kc(std::string &a){
    while(a.find('-') != std::string::npos){
        int index = a.find('-');
        a[index + 1] = toupper(a[index + 1]);
        a.erase(index,1);
    }
}


std::string sck(std::string variable, std::string iformat, std::string oformat) {
    if(iformat == formats[0] && oformat == formats[1]){
        sc(variable);
        return variable;
    }
    else if(iformat == formats[0] && oformat == formats[2]){
        sk(variable);
        return variable;
    }
    else if(iformat == formats[1] && oformat == formats[0]){
        cs(variable);
        return variable;
    }
    else if(iformat == formats[1] && oformat == formats[2]){
        ck(variable);
        return variable;
    }
    else if(iformat == formats[2] && oformat == formats[0]){
        ks(variable);
        return variable;
    }
    else if(iformat == formats[2] && oformat == formats[1]){
        kc(variable);
        return variable;
    }
    else{
        return variable;
    }
}

