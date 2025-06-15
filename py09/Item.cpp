#include <iostream>
#include "Item.h"

Item::Item(std::string n, double q, Date e) : name(n), quantity(q), expiration(e) {}

std::string Item::get_name() const{
    return name;
}

double Item::get_quantity() const{
    return quantity;
}

Date Item::get_expiration() const{
    return expiration;
}

bool Item::is_expired(const Date& date) const{
    return date.is_before(expiration);
}

bool Item::use(double quantity){
    this->quantity -= quantity;
    this->quantity < 0? this->quantity = 0 : this->quantity = this->quantity; 
    return this->quantity;
}
void Item::print(){
    std::cout << name << " (" << quantity << ") - ";
    expiration.print();
}