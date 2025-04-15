#include <iostream>


const long long C = 300000000;

int main() {
    int m;
    std::cin >> m;
    
    long long res = m * C * C;

    std::cout << res << std::endl;

    return 0;
}