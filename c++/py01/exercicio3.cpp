#include <iostream>

int main() {
    int num1,num2;
    char op;
    std::cin >> num1 >> op >> num2;

    switch (op){
    case '+':
        std::cout << num1 + num2;
        break;
    
    case '-':
        std::cout << num1 - num2;
        break;
    
    case '*':
        std::cout << num1 * num2;
        break;

    case '/':
        if(num2){
            std::cout << (float)num1 / (float)num2;
        }
        else{
            std::cout << "invalid operand: divisor cannot be 0";
        }
        break;
    default: std::cout << "invalid operation";
    }

    return 0;
}