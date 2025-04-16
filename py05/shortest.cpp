#include <iostream>

bool comp(const char a[],const char b[]){
    int size_a = 0;
    int size_b = 0;
    while(a[size_a] != '\0' && b[size_b] != '\0'){
        size_a++;
        size_b++;
    }
    return (a[size_a] == '\0') && !(b[size_b] == '\0');
}

const char* shortest(const char* pa[]){
    size_t smol = 0;
    for(size_t i = 0; pa[i] != nullptr; i++ ){
        if(!comp(pa[smol],pa[i])){
            smol = i;
        }
    }
    return pa[smol];
}
