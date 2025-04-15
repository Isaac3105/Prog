#include "iostream"
#include "print_array.h"


int expand(const int c[], const int v[], int n, int res[], int max){
    
    int counter = 0;
    for(int i = 0; i < n; i++){
        counter += c[i];
    }
    if(counter > max){
        return -1;
    }
    counter = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = index; j < c[i] + index ; j++){
            counter++;
            res[j] = v[i];
        }
        index = counter;
    }
    return counter;
}

