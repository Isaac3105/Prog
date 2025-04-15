#include "iostream"
#include "print_array.h"

void reverse(int arr[], int n){
    int temp;
    for(int i = n-1; i >= n/2; i--){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}


