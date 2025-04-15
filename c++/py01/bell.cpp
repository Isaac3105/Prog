#include <iostream>

unsigned long factorial(unsigned long n) {
    unsigned long res = 1;
    while (n > 0) {
        res *= n;
        n --;
    }
    return res;
}

unsigned long bell(unsigned long n){
    unsigned long res;
    res = 0;
    std::cin >> n;
    if (n == 1 || n == 0){
        return 1;
    }
    for(unsigned long i = 0; i < n;i++){
        res+= (factorial(n-1)/(factorial(i)*factorial(n-1-i)))*bell(i);
    }
    return res;
}