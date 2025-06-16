#ifndef INTEGER_H
#define INTEGER_H

#include <iostream>
#include "expression.h"

class Integer : public Expression{
    public:
        Integer(int value) : Expression(), value(value) {};

        virtual int evaluate(){
            return value;
        };
        
        virtual std::string to_string(){
            return std::to_string(value);
        };

        virtual ~Integer(){}
    protected:
        int value;
};



#endif