#include <iostream>
#include <cmath>

int main(){
    int n,x1,y1,x2,y2,total;
    std::cin >> n;
    total = 0;
    std::cin >> x1 >> y1;
    for(int i = 1; i<=n-1;i++){
        std::cin >> x2 >> y2;
        total += abs(x1 - x2) + abs(y1 - y2);
        x1 = x2;
        y1 = y2;
    }

    std::cout << total;
    return 0;
}