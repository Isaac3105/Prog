#ifndef EDITOR_H
#define EDITOR_H

#include <iostream>
#include <vector>
#include "action.h"

class Editor {
    
    public:
        Editor(std::string content) : content(content){};

        virtual void execute(Action* action){
            action->execute(content);
            actions.push_back(action);
        }

        virtual void undo(){
            if(!actions.empty()){
                actions[actions.size()-1]->undo(content);
                delete actions[actions.size()-1];
                actions.pop_back();
            }
        }

        std::string get_content(){
            return content;
        }

        virtual ~Editor(){
            for(Action* v : actions){
                delete v;
            }
        }

    protected:
        std::string content;
        std::vector<Action*> actions;
};


#endif