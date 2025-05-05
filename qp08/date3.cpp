#include <iostream>
#include <algorithm>
#include "Date3.h"

Date::Date(){
    yyyymmdd = "00010101";
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
    std::string y = std::to_string(year);
    std::string m = std::to_string(month);
    std::string d = std::to_string(day);

    if (!(0 < day && day <= num_days(year, month) && 0 < month && month <= 12 && 0 < year && year < 10000)) {
        y = m = d = '0';
    }

    while(y.length() < 4){
        y = '0' + y;
    }
    while(d.length() < 2){
        d = '0' + d;
    }
    while(m.length() < 2){
        m = '0' + y;
    }
    yyyymmdd = y+m+d;
}

Date::Date(const std::string& year_month_day){
    yyyymmdd = year_month_day;
}

int Date::get_year() const{
    return stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const{
    return stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const{
    return stoi(yyyymmdd.substr(6, 2));
}

bool Date::is_valid() const{
    return stoi(yyyymmdd.substr(0, 4)) && stoi(yyyymmdd.substr(4, 2)) && stoi(yyyymmdd.substr(6, 2));
}