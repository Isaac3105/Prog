#include "iostream"
#include "vect3d.h"
#include "cmath"

double esq(vect3d a, vect3d b){
    double res = a.x*b.x + a.y*b.y + a.z*b.z;
    return res;
}

double norm(vect3d a){
    double res = sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
    return res;
}

int angle(vect3d a, vect3d b){
    double cose = esq(a,b) / (norm(a)*norm(b));
    cose = std::max(-1.0, std::min(1.0, cose));
    double res = acos(cose) * 180/M_PI;
    return round(res);
}