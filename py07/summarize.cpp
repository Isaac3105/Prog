#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include "summarize.h"


void short_n_sweet(std::vector<std::string> i, std::string &shorts, std::string &longs){
    if(!i.empty()){
        shorts = longs = i[0];
        for(size_t j = 0; j < i.size(); j++){
            if(i[j].size() <= shorts.size()){
                shorts = i[j];
            }
            if(i[j].size() >= longs.size()){
                longs = i[j];
            }
        }
    }
}

processed_results process_sentence(const std::string& sentence){ 
    std::vector<std::string> sorted;
    std::string shorts;
    std::string longs;
    std::istringstream iss(sentence);
    std::string atual;
    while (iss >> atual){
        sorted.push_back(atual);
    }
    std::sort(sorted.begin(),sorted.end(), [](std::string a, std::string b){ return a <= b;});
    std::istringstream iss2(sentence);
    //short_n_sweet(sorted, shorts, longs);
    if(sorted.size() >= 1){
        shorts = sorted[0];
        longs = sorted[sorted.size()-1];
    }
    processed_results res = {sorted, shorts, longs, sorted.size()};
    return res;
}