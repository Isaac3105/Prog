#include "iostream"

int main(){
    return 0;
}

int triangles(int p) {
    int res = 0;
    
    for (int a = 1; a < p / 2; a++) {
        for (int b = a; b < p / 2; b++) { 
            int c = p - a - b;  

            if (c > 0 && (a * a + b * b == c * c)) {  
                res++;
            }
        }
    }
    
    return res;
}


