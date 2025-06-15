#include <iostream>
#include "Flaxer.h"

Flaxer::Flaxer(std::string n, std::string p, int a) : name(n), preference(p), age(a) {}

std::string Flaxer::get_name() const{
    return name;
}

std::string Flaxer::get_preference() const{
    return preference;
}

int Flaxer::underage() const{
    return age < 18;
}