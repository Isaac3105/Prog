#include "iostream"

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); //função para ver se é uma letra
}

int common_letters(const char a[], const char b[], char out[]){
    int alphabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //alfabeto para o A
    int betabet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //alfabeto para o B
    int res = 0;
    int sizeA = 0;
    int sizeB = 0;
    while(a[sizeA] != '\0'){
        sizeA ++; //coiso para saber o tamanho do A
    }
    while(b[sizeB] != '\0'){
        sizeB ++; //coiso para saber o tamanho do A
    }
    for(int i = 0; i < sizeA; i++){
        if(isLetter(a[i])){
            alphabet[tolower(a[i]) - 'a'] = 1;
        }
    }
    for(int i = 0; i < sizeB; i++){
        if(isLetter(b[i])){
            betabet[tolower(b[i]) - 'a'] = 1;
        }
    }
    for(int i = 0; i < 26; i++){
        if(alphabet[i] && betabet[i]){
            out[res] = (char) 'a' + i;
            res++;
        }
    }
    return res;
}

