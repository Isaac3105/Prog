#include <iostream>
#include "Student.h"

Student::Student(const std::string& id){
    id_ = id;
    courses_ = {};
}

std::string Student::get_id() const{
    return id_;
}

void Student::add(const course& c){
    courses_.push_back(c);
}

double Student::avg() const{
    double num = 0;
    double den = 1;
    for(size_t i = 0; i < courses_.size(); i++){
        num += courses_[i].grade*courses_[i].credits;
        den += courses_[i].credits;
    }
    den > 1? den-- : den = 1;
    return num/den;
}
