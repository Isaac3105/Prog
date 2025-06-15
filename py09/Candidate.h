#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>

class Candidate {
private:
  std::string name;
  int votes;

public:
  Candidate(std::string n);
  std::string get_name() const;
  int get_votes() const;
  void vote(); // increments votes
  bool operator < (const Candidate& c) const; // compares two candidates by votes
};

#endif // CANDIDATE_H