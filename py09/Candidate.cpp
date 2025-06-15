#include <iostream>
#include "Candidate.h"

Candidate::Candidate(std::string n) : name(n) {}

std::string Candidate::get_name() const{
    return name;
}

int Candidate::get_votes() const{
    return votes;
}

void Candidate::vote(){
    votes++;
}

bool Candidate::operator < (const Candidate& c) const{
    return votes < c.get_votes();
}