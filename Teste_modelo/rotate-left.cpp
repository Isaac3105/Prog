#include "iostream"
#include "print_array.h"

void rotate_left(int a[], int n, int k){
    //If the n is less or equal to 1 or k is less or equal to 0 the array should not be changed.
    if(n <= 1 || k <= 0){
        return;
    }

    for(int i = 0; i < k; i++){
        int last = a[0];
        for(int j = 0; j < n-1; j++){
            a[j] = a[j+1];
        }
        a[n-1] = last;
    }
}

