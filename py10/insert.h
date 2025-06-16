#ifndef INSERT_H
#define INSERT_H

#include <iostream>
#include <string>
#include <iterator>
#include "action.h"


class Insert : public Action {
    public:
        Insert(const std::string& text, size_t position) : text(text), pos(position) {};

        virtual void execute(std::string& s){
            s.insert(pos, text, 0, text.size());
        }

        virtual void undo(std::string& s){
            s.erase(pos, text.size());
        }


        virtual ~Insert(){};

    protected:
        std::string text;
        size_t pos;
};


#endif