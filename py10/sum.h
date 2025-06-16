#ifndef SUM_H
#define SUM_H

#include <iostream>
#include "expression.h"

class Sum : public Expression{
    public:
        Sum(Expression* left, Expression* right) : Expression(), left(left), right(right){}

        virtual int evaluate(){
            int res = left->evaluate() + right->evaluate();
            return res;
        }
        
        virtual std::string to_string(){
            return "(" + left->to_string() + " + " + right->to_string() + ")";
        }

        virtual ~Sum(){
            delete left;
            delete right;
        }
    protected:
        Expression* left;
        Expression* right;
};



#endif