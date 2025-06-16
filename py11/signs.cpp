#include <iostream>
#include "signs.h"
#include <algorithm>


SignDB::SignDB(){}

void SignDB::addSign(const sign& sign){
    signs[sign.location].push_back(sign);
}

std::vector<sign> SignDB::getSignsAt(const std::string& road) const{
    std::vector<sign> res = signs.at(road);
    std::sort(res.begin(),res.end(),[](sign a, sign b){return a.year < b.year;});
    return res;
}


std::ostream& operator<<(std::ostream& os, sign a){
    os << a.type << " at " << a.location << " (" << a.year << ")";
    return os;
}