#include "iostream"

int ssum(int arr[], int n){
    int atual = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp += arr[i];
        if(temp > atual)
            atual = temp;
        if (temp < 0) temp = 0;
        
    }
    if(temp > atual){
        atual = temp;
    }
    return atual;
}

