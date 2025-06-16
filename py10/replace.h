#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <string>
#include <iterator>
#include "action.h"


class Replace : public Action {
    public:
        Replace(const std::string& former, const std::string latter) : former(former), latter(latter) {};

        virtual void execute(std::string& s){
            size_t index = s.find(former);
            while(index != std::string::npos){
                s.replace(index,former.size(),latter);
                index = s.find(former);
            }
        }

        virtual void undo(std::string& s){
            size_t index = s.find(latter);
            while(index != std::string::npos){
                s.replace(index,latter.size(),former);
                index = s.find(latter);
            }
        }

        virtual ~Replace(){};

    protected:
        std::string former;
        std::string latter;
};


#endif