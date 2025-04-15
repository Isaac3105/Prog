#include "iostream"
#include "cmath"

int main(){
    return 0;
}

unsigned long pell(unsigned long n){
    unsigned long atual;
    unsigned long anterior = 1;
    unsigned long ante_anterior = 0;
    for(unsigned long i = 2; i <= n; i++){
        atual = 2*anterior + ante_anterior;
        ante_anterior = anterior;
        anterior = atual;
    }
    return (n? anterior : ante_anterior);
}




