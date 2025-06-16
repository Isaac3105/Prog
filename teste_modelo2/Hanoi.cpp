#include <iostream>
#include "Hanoi.h"

Tower::Tower(int n_disks) : n_disks(n_disks), idx_top(0){
    disks_ = new int[n_disks]; 
}

Tower::~Tower() {
    delete[] disks_;
}

int Tower::top() const {
    if (idx_top == 0) return 0;
    return disks_[idx_top - 1];
}

void Tower::add(int disk) {
    disks_[idx_top] = disk;
    idx_top++;
}

void Tower::remove() {
    if (idx_top > 0)
        --idx_top;
}

std::string Tower::str() const {
    std::string res = "[";
    for (int i = 0; i < idx_top; ++i) {
        res += " " + std::to_string(disks_[i]);
    }
    res += " ]";
    return res;
}


void Hanoi::move(std::initializer_list<disk_move> dmoves){
    for(disk_move v : dmoves){
        if(towers_[v.from].top() != 0 && (towers_[v.to].top() == 0 || towers_[v.from].top() < towers_[v.to].top())){
            towers_[v.to].add(towers_[v.from].top());
            towers_[v.from].remove();
        }
    }
}