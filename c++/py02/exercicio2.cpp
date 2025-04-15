#include "iostream"
#include "cmath"

int main(){
    return 0;
}

int area(int a, int b, int c = 0){
    if (c == 0){
        return ceil(a*b*0.5);
    }
    else{
        double s = 0.5*(a+b+c);
        return ceil(sqrt( s*(s-a)*(s-b)*(s-c)));
    }
}