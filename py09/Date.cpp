#include <iostream>
#include <iomanip> 
#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::get_day() const{
    return day;
}

int Date::get_month() const{
    return month;
}

int Date::get_year() const{
    return year;
}

bool Date::is_before(const Date& other) const{
    double first = (double)year + (double)month/12 + (double)day/12/31;
    double second = (double)other.get_year() + (double)other.get_month()/12 + (double)other.get_day()/12/31;
    return first < second;
}

void Date::print(){
    std::cout << day << '/' << month << '/' << year;
}