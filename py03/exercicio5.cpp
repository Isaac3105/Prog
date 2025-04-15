#include "iostream"
#include "fraction.h"

fraction mul(fraction a, fraction b){
    fraction res;
    res.num = a.num * b.num;
    res.den = a.den * b.den;
    res = normalize(res);
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
    res = normalize(res);
    if(res.den < 0){
        res.den = -res.den; 
        res.num = -res.num;
    }
    return res;
}

fraction exp(const fraction &a, const int n){
    fraction res;
    for(int j = 0; j < n; j++){
        if(j==0) {res = a;}
        else{res = mul(a,res);}
    }
    if (n <= 0){
        res = {1,1};
    }
    return res;
}

fraction eval(const fraction a[], int n, fraction x){
    fraction res = {0,1};
    for(int i = 0; i < n ; i++){
        fraction temp = mul(a[i],exp(x,i));
        res = add(res,temp);
    }
    return res;
}