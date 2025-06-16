#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include <iostream>
#include "Figure.h"

class FRectangle : public Figure {
    public:
        FRectangle(int x_center_, int y_center_, int width_, int height_) : Figure(x_center_, y_center_) , width_(width_), height_(height_) {};

        virtual void draw() const{
            std::cout << "R(" << x_center_ << ',' << y_center_ << ")(" << width_ << ',' << height_ << ')';
        }

    protected:
        int width_, height_;
};

#endif // FRECTANGLE_H