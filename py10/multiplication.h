#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include <iostream>
#include "expression.h"

class Multiplication : public Expression{
    public:
        Multiplication(Expression* left, Expression* right) : Expression(), left(left), right(right){}

        virtual int evaluate(){
            int res = left->evaluate() * right->evaluate();
            return res;
        }
        
        virtual std::string to_string(){
            return "(" + left->to_string() + " * " + right->to_string() + ")";
        }

        virtual ~Multiplication(){
            delete left;
            delete right;
        }
    protected:
        Expression* left;
        Expression* right;
};



#endif