#include "iostream"

int nrl(const char s[], char low[]){
    int betabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 0;
    while(s[size] != '\0'){
        size++;
    }
    for(int i = 0; i < size; i++){
        if(s[i] != ' ' && s[i] != ','){
            int index =  tolower(s[i]) - 'a';
            betabet[index]++;
        }
    }
    int c = 0;
    for(int k = 0; k < 26; k++){
        if(betabet[k] == 1){
            low[c++] = 'a' + k;
        }
    }
    low[c] = '\0';
    return c;
}

