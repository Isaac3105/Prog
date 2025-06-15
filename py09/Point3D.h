#include <iostream>
#ifndef POINT3D_H
#define POINT3D_H
/* A constructor Point3D(double x, double y, double z); that initializes the coordinates with given values.
A copy constructor Point3D(const Point3D& p);
Accessors: double x() const;, double y() const;, double z() const;
Static class constants: static const Point3D ORIGIN, UNIT_X, UNIT_Y, UNIT_Z; corresponding to the points (0,0,0)
, (1,0,0), (0,1,0), and (0,0,1)
.
A member function to test equality between points: bool equal_to(const Point3D& other) const; which returns true if and only if the x, y, and z coordinates are equal.
A member function: void negate(); that negates the point's coordinates (each coordinate c should be changed to -c). */

class Point3D {
    private:
        double x_, y_, z_;
    public:
        Point3D(double x, double y, double z);
        Point3D(const Point3D& p);
        double x() const; 
        double y() const; 
        double z() const;
        static const Point3D ORIGIN, UNIT_X, UNIT_Y, UNIT_Z;
        bool equal_to(const Point3D& other) const;
        void negate();
};


#endif //POINT3D_H