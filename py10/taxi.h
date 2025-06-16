#ifndef TAXI_H
#define TAXI_H

#include <iostream>
#include "car.h"

class Taxi : public Car {
    public:
        Taxi(std::string driver, int fuel, double pm) : Car(driver, fuel), pm(pm) {};
        
        bool drive(int miles){
            int inicio = fuel;
            Car::drive(miles);
            profit += (inicio - fuel)*pm;
            return (inicio - miles) != 0;
        }

        void refuel(int fuel){
            Car::refuel(fuel); 
        }

        void print() const {
            std::cout << driver << "'s taxi: " << miles << " miles driven, " << fuel << " gallons left, " << "made " << profit <<"$\n";
        }
    
    private:
        double pm;
        int profit;
};


#endif