#include "iostream"
#include "complex.h"

void add(const complex& a, const complex& b, complex& r){
    r = {a.real + b.real,a.img + b.img};
}

void mul(const complex& a, const complex& b, complex& r){
    r = {a.real*b.real - b.img*a.img, a.real*b.img + b.real*a.img};
}

complex exp(const complex &a, const int n){
    complex res;
    for(int j = 0; j < n; j++){
        if(j==0) {res = a;}
        else{mul(a,res,res);}
    }
    if (n <= 0){
        res = {1,0};
    }
    return res;
}

complex eval(const complex a[], int n, complex x){
    complex res = {0,0};
    for(int i = 0; i < n ; i++){
        complex temp;
        mul(a[i],exp(x,i),temp);
        add(res,temp,res);
    }
    return res;
}