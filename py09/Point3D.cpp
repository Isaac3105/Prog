#include <iostream>
#include "Point3D.h"

Point3D::Point3D(double x, double y, double z) : x_(x), y_(y), z_(z) {};

Point3D::Point3D(const Point3D& p) : x_(p.x()), y_(p.y()), z_(p.z()) {};

double Point3D::x() const{
    return x_;
} 

double Point3D::y() const{
    return y_; 
} 

double Point3D::z() const{
    return z_;
}

const Point3D Point3D::ORIGIN  = Point3D(0, 0, 0);

const Point3D Point3D::UNIT_X  = Point3D(1, 0, 0);

const Point3D Point3D::UNIT_Y  = Point3D(0, 1, 0);

const Point3D Point3D::UNIT_Z  = Point3D(0, 0, 1);

bool Point3D::equal_to(const Point3D& other) const{
    return x_ == other.x() && y_ == other.y() && z_ == other.z();
}

void Point3D::negate(){
    x_ = -x_;
    y_ = -y_;
    z_ = -z_;
}