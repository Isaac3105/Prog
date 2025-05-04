#include <iostream>
#include <sstream>
#include "Date2.h"
#include <algorithm>

Date::Date(){
    year = 1;
    month = 1;
    day = 1;
}

int Date::num_days(int year, int month){
    int normal[7] = {1,3,5,7,8,10,12};
    if(std::find(std::begin(normal), std::end(normal), month) != std::end(normal)){
        return 31;
    }
    else if(year == 2){
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)? 29 : 28;
    }
    else{
        return 30;
    }
}


Date::Date(int year, int month, int day){
    if(0 < day && day < num_days(year,month) + 1 && 0 < month && month < 13 && 0 < year &&  year < 10000){
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else{
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }
}

Date::Date(const std::string& year_month_day) {
    std::istringstream text(year_month_day);
    std::string y, m, d;

    if (std::getline(text, y, '/') && std::getline(text, m, '/') && std::getline(text, d)) {
        try {
            year = std::stoi(y);
            month = std::stoi(m);
            day = std::stoi(d);
        } catch (...) {
            year = month = day = 0;
            return;
        }

        if (!(0 < day && day <= num_days(year, month) && 0 < month && month <= 12 && 0 < year && year < 10000)) {
            year = month = day = 0;
        }
    } else {
        year = month = day = 0;
    }
}



int Date::get_year() const{
    return year;
}


int Date::get_month() const{
    return month;
}


int Date::get_day() const{
    return day;
}


bool Date::is_valid() const{
    return year && month && day;
}


int main(){
    Date d3("2ooo/2/28"); d3.write(); std::cout << (d3.is_valid() ? "" : "-invalid") << std::endl;
}