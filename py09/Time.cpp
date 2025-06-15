#include <iostream>
#include "Time.h"
#include <iomanip>

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
    double first = (double)hours + (double)minutes/60;
    double second = (double)other.hours + (double)other.minutes/60;
    return first < second;
}

void Time::print_time(){
    std::cout << hours << ":" << std::setw(2) << std::setfill('0') << minutes << " | ";
}
