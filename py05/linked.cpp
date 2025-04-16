#include <iostream>
#include "linked.h"

void append(node *head, int x){
    node *current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = new node{x,nullptr};
}