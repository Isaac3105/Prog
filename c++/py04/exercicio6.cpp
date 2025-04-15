#include "iostream"

void trim(char s[]){
    int pseudo_size = 0;
    while(s[pseudo_size] != '\0'){
        pseudo_size++;
    }
    int inicial = -1;
    int final = -1;

    for (int i = 0; i < pseudo_size; i++) {
        if (s[i] != ' ') {
            inicial = i;
            break;
        }
    }
    for (int i = pseudo_size - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            final = i;
            break;
        }
    }
    
    if (inicial == -1 || final == -1) {
        s[0] = '\0';
        return;
    }

    int j = 0;
    for (int i = inicial; i <= final; i++) {
        s[j++] = s[i];
    }
    s[j] = '\0';
}


