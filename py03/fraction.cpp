#include "iostream"
#include "fraction.h"

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simple(int &a, int &b) {
    int divisor = gcd(a, b);
    a /= divisor;
    b /= divisor;
}
fraction mul(fraction a, fraction b){
    fraction res;
    res.num = a.num * b.num;
    res.den = a.den * b.den;
    simple(res.num,res.den);
    if(res.num == res.den) res = {1,1};
    if(res.den < 0){
        res.den = -res.den; 
        res.num = -res.num;
    }
        return res;
}

fraction add(fraction a, fraction b){
    fraction res;
    res.num = a.num*b.den + b.num*a.den;
    res.den = a.den*b.den;
    simple(res.num,res.den);
    if(res.den < 0){
        res.den = -res.den; 
        res.num = -res.num;
    }
    return res;
}

