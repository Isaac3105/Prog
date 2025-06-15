#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <vector>

template <typename T>

class Queue {
    private:
        std::vector<T> store;
    public:
        void enqueue(T v){
            store.push_back(v);
        }
        bool dequeue(T &v){
            if(store.empty()){
                return false;
            }
            v = store.front();
            store.erase(store.begin());
            return true;
        }
        bool peek(T &v){
            if(store.empty()){
                return false;
            }
            v = store.front();
            return true;
        }
        size_t size(){
            return store.size();
        }
};

#endif