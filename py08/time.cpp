#include <iostream>
#include "time.h"

Time::Time(){
    hours = 0;
    minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void rectify(int &m, int &h){
    while(m >= 60){
        m -= 60;
        h++;
    }
    int delta = 0;
    bool pode = false;
    while(h >= 24){
        pode = true;
        h -= 1;
        delta++;
    }
    if(pode){
        h = delta-1;
    }
}

void Time::tick(){
    minutes++;
    rectify(minutes,hours);
}

void Time::add(const Time &t){
    hours += t.hours;
    minutes += t.minutes;
    rectify(minutes,hours);
}

void Time::print(){
    std::string h_str = std::to_string(hours);
    std::string m_str = std::to_string(minutes);
    if(h_str.length() < 2){
        h_str = "0" + h_str;
    }
    if(m_str.length() < 2){
        m_str = "0" + m_str;
    }
    std::cout << h_str << ":" << m_str << std::endl;
}
