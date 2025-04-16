#include <iostream>

void reverse_in_place(char* s){
    size_t size = 0;
    while(s[size] != '\0'){
        size++;
    }
    for (size_t j = 0; j < size/2; j++) {
        char temp = s[j];
        s[j] = s[size-1-j];
        s[size-1-j] = temp;
    }
}