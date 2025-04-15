#include "iostream"

int main(){
    return 0;
}

int unsigned long next_mersenne(unsigned long n){
    unsigned long res = 1;
    unsigned long temp = 1;
    while(res < n){
        temp = temp * 2;
        res = temp - 1;
    }
    return n == 0? 0 : res;
}
