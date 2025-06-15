#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include "Election.h"

Election::Election(const std::vector<Candidate>& c) : candidates(c) {}

void Election::vote(Flaxer flaxer){
    if(!flaxer.underage()){
        for(size_t i = 0; i< candidates.size(); i++){
            if(candidates[i].get_name() == flaxer.get_preference()){
                candidates[i].vote();
                break;
            }
        }
    }
} 

Candidate Election::winner() const{
    std::vector<Candidate> candidates2 = candidates;
    std::sort(candidates2.begin(), candidates2.end(), [](Candidate a, Candidate b){return a < b;});
    return candidates2[candidates2.size() - 1];
}

void Election::stats(){
    std::vector<Candidate> candidates2 = candidates;
    std::sort(candidates2.begin(), candidates2.end(), [](Candidate a, Candidate b){return a < b;});
    int deno = 0;
    for(size_t i = 0; i < candidates2.size(); i++){
        deno += candidates2[i].get_votes();
    }
    for (int i = static_cast<int>(candidates2.size()) - 1; i >= 0; i--){
        if (deno == 0) {
            return;
        }
        std::cout << candidates2[i].get_name() << ": " << std::round((double)candidates2[i].get_votes() * 100 / deno) << "%\n";
    }
}