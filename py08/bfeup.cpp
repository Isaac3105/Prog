#include <iostream>
#include "bfeup.h"

BFEUP::BFEUP(){
    movements = {};
}

void BFEUP::add_movement(action act, int amount, int day, int month, int year){
    movement trans = {act,amount,day,month,year};
    movements.push_back(trans);
}

int BFEUP::balance(int month, int year){
    int res = 0;
    for(size_t i = 0; i < movements.size(); i++){
        if(movements[i].month == month && movements[i].year == year){
            if(movements[i].act == WITHDRAW){
                res -= movements[i].amount;
            }
            else if(movements[i].act == DEPOSIT){
                res += movements[i].amount;
            }
        }   
    }
    return res;
}

void BFEUP::print_movements(int month, int year){
    for(size_t i = 0; i < movements.size(); i++){
        if(movements[i].month == month && movements[i].year == year){
            std::cout << movements[i] << std::endl;
        }   
    }
}
