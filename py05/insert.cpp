#include <iostream>
#include "alist.h"

void insert_at(alist* a, int index, int value){
    if(index > a->size) return;
    int *list = new int[a->size +1];
    for(int i = 0; i < a->size+1; i++){
        if(i < index){
        list[i] = a->elements[i];
        }
        else if(i == index){
            list[index] = value;
        }
        else{
            list[i] = a->elements[i-1];
        }
    }
    delete[] a->elements;
    a->size++;
    a->elements = list;
}
