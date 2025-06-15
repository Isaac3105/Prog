#ifndef FLAXER_H
#define FLAXER_H

#include <string>

class Flaxer {
private:
  std::string name;
  std::string preference;
  int age;
public:
  Flaxer(std::string n, std::string p, int a);
  std::string get_name() const;
  std::string get_preference() const;
  int underage() const; // a flaxer is underage if he is younger than 18
};

#endif // FLAXER_H