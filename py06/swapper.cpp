#include <iostream>

template <typename T>
void swapper(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 3; int b = 5; 
    swapper(a, b);
    std::cout << a << ' ' << b << '\n';
}