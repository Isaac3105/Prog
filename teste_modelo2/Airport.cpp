#include <iostream>
#include "Airport.h"

Airport::Airport(const std::string& name, const std::string& city) : name_(name), city_(city){}

std::string Airport::name() const{
    return name_;
}

std::string Airport::city() const{
    return city_;
}

void Airport::land(const airplane& ap){
    airplanes_.push_back(ap);
}

void Airport::takeoff(const std::string& id){
    size_t index;
    for(size_t i = 0; i < airplanes_.size(); i++){
        if(airplanes_[i].id == id){
            index = i;
            break;
        }
    }
    airplanes_.erase(airplanes_.begin()+index);
} 

int Airport::count_airplanes(const std::string& airline) const{
    int res = 0;
    for(size_t i = 0; i < airplanes_.size(); i++){
        if(airplanes_[i].airline == airline){
            res++;
        }
    }
    return res;
}