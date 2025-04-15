#include <iostream>

int main(){
    char des,cripled;
    std::cin >> des >> cripled;
    int c = des^cripled;
    std::cout << "encryption key is " << c;
    return  0;
}