#include "iostream"

int main(){
    return 0;
}

bool leap(int year){
    return (year%4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int sundays(int year){
    int atual = 1;
    int days;
    int res = 0;
    for(int i = 1900;i<=year;i++){
        leap(i)? days = 366 : days = 365;
        for(int j = 1; j <= days;j++){
            atual += 1;
            if(atual == 8){
                atual = 1;
            }
            if(atual == 1){
                res += 1;
            }
        }
    }
    return res;
}




