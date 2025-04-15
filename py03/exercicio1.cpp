#include "iostream"
#include "vect3d.h"

struct res {
    float x;
    float y;
    float z;
};

vect3d cross(vect3d a, vect3d b){
    vect3d res;
    res.x = a.y * b.z - a.z*b.y;
    res.y =  0 - (a.x * b.z - a.z*b.x);
    res.z = a.x * b.y - a.y*b.x;
    return res;
}