#include <iostream>
#include "print_row.h"



void parse_csv_row(const std::string& row, std::vector<std::string>& fields) {
    std::string acc = "";
    for(size_t j = 0; j < row.size() ; j++){
        if(row[j] == ','){
            fields.push_back(acc);
            acc.clear();
            
        }
        else{
            acc += row[j];
        }
    }
    fields.push_back(acc);
}
