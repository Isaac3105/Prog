#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Person.h"

Person::Person(const std::string& name, const std::string& address, const std::string& phone){
    name_ = name;
    address_ = address;
    phone_ = phone;
}

std::string Person::get_name() const{
    return name_;
}

std::string Person::get_address() const{
    return address_;
}

std::string Person::get_phone() const{
    return phone_;
}

using std::string;
using std::vector;

void read_persons_data(const string& file_name, vector<Person>& persons){
    std::ifstream file;
    file.open(file_name);
    std::string line;
    int keep = 0;
    std::string name, address, phone;
    while(getline(file,line)){
        if(keep == 0){
            name = line; 
        }
        else if(keep == 1){
            address = line; 
        }
        else if(keep == 2){
            phone = line;
            keep = -1;
            Person xeno = {name,address,phone};
            persons.push_back(xeno);
        }
        keep++;
        
    }
    file.close();
}

void sort_persons_by_name(vector<Person>& persons){
    std::sort(persons.begin(),persons.end(), [](const Person &a, const Person &b){ return a.get_name() <= b.get_name();});
}
