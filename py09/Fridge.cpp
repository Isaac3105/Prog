#include <iostream>
#include <algorithm>
#include "Fridge.h"


size_t findIndex(std::vector<Item>& v, Item val) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i].get_name() == val.get_name()) {
            return i;
        }
    }
    return -1;
}

Fridge::Fridge(){}

void Fridge::add(Item item){
    size_t index = -1;
    for(size_t i = 0; i < items.size(); i++){
        if(items[i].get_name() == item.get_name()){
            index = i;
            break;
        }
    }
    if(index != (size_t)-1){
        int quan = items[index].get_quantity();
        Item novo = {item.get_name(), item.get_quantity() + quan, item.get_expiration()};
        items[index] = novo;
        return;
    }
    items.push_back(item);
}

void Fridge::consume(std::string name, double quantity){
    size_t index = -1;
    for(size_t i = 0; i < items.size(); i++){
        if(items[i].get_name() == name){
            index = i;
            break;
        }
    }
    if(index != (size_t)-1){
        Item novo = {items[index].get_name(), items[index].get_quantity() - quantity, items[index].get_expiration()};
        if(novo.get_quantity() <= 0){
            items.erase(items.begin() + index);
            return;
        }
        items[index] = novo;
    }
}

void Fridge::remove_expired(const Date& date){
    std::vector<std::string> exps;
    for(size_t i = 0; i < items.size(); i++){
        if(items[i].get_expiration().is_before(date)){
            exps.push_back(items[i].get_name());
        }
    }
    size_t index = -1;
    while(index != exps.size()-1){
        index++;
        for(size_t i = 0; i < items.size(); i++){
            if(items[i].get_name() == exps[index]){
                items.erase(items.begin() + i);
                break;
            }
        }
    }
}

void Fridge::print(){
    for(size_t i = 0; i < items.size(); i++){
        items[i].print();
        std::cout << std::endl;
    }
}