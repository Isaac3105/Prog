#include "iostream"
#include "complex.h"
#include "cmath"

void add(const complex& a, const complex& b, complex& r){
    r = {a.x + b.x,a.y + b.y};
}

void mul(const complex& a, const complex& b, complex& r){
    r = {a.x*b.x - b.y*a.y, a.x*b.y + b.x*a.y};
}

double norm(const complex &a){
    double res = sqrt(a.x*a.x + a.y*a.y);
    return res;
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n){
    for(unsigned int i = 0; i<=n; i++){
        if(i==0){
            z_n = {0,0};
        }
        else{
            mul(z_n,z_n,z_n);
            add(z_n,c,z_n);
        }
    }
    
}