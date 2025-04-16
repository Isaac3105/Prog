#include <iostream>
#include "linked.h"

#include <iostream>
#include "linked.h"

void insert(node*& head, int x, int i) {
    node* newNode = new node{x, nullptr};

    if (i == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* current = head;
    for (int j = 0; j < i - 1; j++) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

