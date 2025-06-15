#ifndef QUEUE_H
#define QUEUE_H

#include "linked.h"

class Queue : private List {
public:
    void push(int value) {
        push_back(value);  
    }

    
    int pop() {
        if (size() == 0) return 0;
        return pop_front();  
    }

    
    int size() {
        return List::size();  
    }
};

#endif
