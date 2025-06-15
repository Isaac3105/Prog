#ifndef ELECTION_H
#define ELECTION_H

#include "Flaxer.h"
#include "Candidate.h"
#include <vector>

class Election {
private:
  std::vector<Candidate> candidates;

public:
  Election(const std::vector<Candidate>& c);
  void vote(Flaxer flaxer); // cast a flaxer's vote, if he is not underage
  Candidate winner() const;
  // Prints the results of the election. Candidates should be printed in
  // descending order of votes, with the percentage of votes they got.
  // Example:
  // Flax: 67%
  // Flex: 33%
  // Flix: 0%
  void stats();
};

#endif // ELECTION_H