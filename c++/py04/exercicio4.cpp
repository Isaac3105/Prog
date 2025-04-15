#include "iostream"
#include "print_array.h"




void build(int arr[], int n){
    int atual = 0;
    for(int i = 0; i < n; i++){
        arr[i] += atual;
        atual = arr[i];
    }
}

int sum(int arr[], int a, int b ){
    int res=0;
    if (a==0){
        res=arr[b];
    }
    else {
        res=arr[b]-arr[a-1];    
    }
    return res;
}


