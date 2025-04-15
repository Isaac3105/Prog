#include "iostream"

int main(){
    int h,m,delta;
    std::cin>> h >> m >> delta;
    int mins_total = h*60 + m;
    mins_total += delta;
    h = mins_total / 60;  
    m = mins_total % 60;
    while(m >= 60){
        m = m - 60;
        h++;
    }
    while(h >= 24){
        h = h - 24;
    }
    std::cout<< h << " " << m;
    return 0;
}