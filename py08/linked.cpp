#include <iostream>
#include "linked.h"

List::List(){
    head = nullptr;
    size_ = 0;
}

void List::push_front(int value) {
    node* novo = new node{value, head};
    head = novo;
    size_++;
}


void List::push_back(int value) {
    node* novo = new node{value, nullptr};
    if (head == nullptr) {
        head = novo;
    } 
    else {
        node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = novo;
    }
    size_++;
}


int List::pop_front(){
    if (size_ == 0) return 0;
    
    int result = head->value;

    if (size_ == 1) {
        delete head;
        head = nullptr;
        size_ = 0;
        return result;
    }

    node *prox = head->next;
    delete head;
    head = prox;
    size_--;
    return result;
}

int List::size(){
    return size_;
}

void List::print() {
    std::cout << "[";
    node* current = head;
    while (current != nullptr) {
        std::cout << current->value;
        if (current->next != nullptr)
            std::cout << ", ";
        current = current->next;
    }
    std::cout << "]";
}

	

List::~List(){
    while(head != nullptr){
        List::pop_back();
    }
}