#ifndef FCIRCLE_H
#define FCIRCLE_H

#include <iostream>
#include "Figure.h"

class FCircle : public Figure {
    public:
        FCircle(int x_center_, int y_center_, int rad) : Figure(x_center_, y_center_) , rad(rad) {};

        virtual void draw() const{
            std::cout << "C(" << x_center_ << ',' << y_center_ << ")(" << rad << ')';
        }

    protected:
        int rad;
};

#endif // FCIRCLE_H