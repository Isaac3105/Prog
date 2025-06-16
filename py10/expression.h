#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <iostream>


class Expression{
    public:
        virtual int evaluate() = 0;
        
        virtual std::string to_string() = 0;

        virtual ~Expression(){}
};



#endif