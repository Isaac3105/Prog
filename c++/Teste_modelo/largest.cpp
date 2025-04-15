#include "iostream"
#include "interval.h"

int minutes(interval a){
    return a.end.h*60 + a.end.m - a.start.h*60 - a.start.m - 1;
}

interval largest(const interval a[], int n){
    interval maior;

    for(int i = 0; i < n; i++){
        if(i == 0){
            maior = a[i];
        }
        else{
            if(minutes(a[i]) > minutes(maior)){
                maior = a[i];
            }
        }
    }
    return maior;
}
