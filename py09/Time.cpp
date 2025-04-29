#include <iostream>
#include "Time.h"

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

Time::Time(const Time& t){
    hours = t.hours;
    minutes = t.minutes;
}

int Time::get_hours() const{
    return hours;
}

int Time::get_minutes() const{
    return minutes;
}

bool Time::is_before(const Time& other) const{
    double first = hours + minutes/60;
    double second = other.hours + other.minutes/60;
    return first < second;
}

void Time::print_time(){
    std::cout << hours << ':' << minutes << std::endl;
}