#ifndef LINKED_H
#define LINKED_H

#include <iostream>

struct node {
    int value;
    node *next;
};

void destroy(node *n) {
    if (n == nullptr) return;

    destroy(n->next);
    delete n;
}

std::ostream& operator<<(std::ostream& out, node *n) {
    std::cout << "[" << n->value;
    while (n->next) {
        n = n->next;
        std::cout << ", " << n->value;
    }
    std::cout << "]";
    return out;
}

#endif