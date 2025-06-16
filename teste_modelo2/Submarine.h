#ifndef SUB_H
#define SUB_H
#include <iostream>
#include "Floatable.h"

class Submarine : public Floatable{
    public:
        Submarine(int id, const double mass, std::string captain) : Floatable(id,mass), captain_(captain) {}

        std::string captain() const{
            return captain_;
        }

        virtual double buoyancy() const{
            return (double) mass() * 9.81 * 1025;
        }

    private:
        std::string captain_;
};


#endif