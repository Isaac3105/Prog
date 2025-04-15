#include "iostream"
#include "interval.h"

interval menor(interval a,interval b){
    int a_comeco_minutos = a.start.h*60 +a.start.m;
    int a_final_minutos = a.end.h*60 +a.end.m;
    int b_comeco_minutos = b.start.h*60 +b.start.m;
    int b_final_minutos = b.end.h*60 +b.end.m;
    interval res;
    res = (a_final_minutos-a_comeco_minutos < b_final_minutos-b_comeco_minutos) ? a : b;
    return res;
}

interval smallest(const interval a[], int n){
    interval atual;
    for(int i=0;i<n;i++){
        if(i == 0) atual = a[0];
        else{
            atual = menor(atual,a[i]);
        }
    }
    return atual;
}