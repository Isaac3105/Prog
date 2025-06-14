#include <iostream>
#include <sstream>
#include <vector>
#include "summarize.h"

processed_results process_sentence(const std::string& sentence){
    processed_results res; 
    std::vector<std::string> sorted;
    std::string shorts;
    std::string longs;
    std::istringstream iss(sentence);
    
}