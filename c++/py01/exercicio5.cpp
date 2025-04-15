#include <iostream>
#include <cmath>

int lenght(int n){
    int tamanho = 0;
    while(n > 0){
        n/=10;
        tamanho += 1;
    }
    return tamanho;
}

int main(){
    int num1;
    int num2 = 0;
    std::cin >> num1;
    double exp = lenght(num1);
    while(num1 > 0){
        num2 += (num1%10) * pow(10,exp-1);
        num1/=10;
        exp--;
    }
    std::cout << num2;
    return 0;
}