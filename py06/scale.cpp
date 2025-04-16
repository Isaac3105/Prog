#include <iostream>
#include "print_vector.h"


template <typename T>
void scale(std::vector<T>& v, const T& factor){
    for( size_t i = 0; i < v.size(); i++){
        v[i] = v[i] * factor;
    }
}