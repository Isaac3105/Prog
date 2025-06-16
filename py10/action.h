#ifndef ACTION_H
#define ACTION_H

#include <string>

class Action {
public:
  virtual void execute(std::string& s) = 0;
  virtual void undo(std::string& s) = 0;
  virtual ~Action() { }
};

#endif // ACTION_H