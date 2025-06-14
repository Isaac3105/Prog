//
// Created by jlopes on 23-03-2025.
//
#ifndef SUMMARIZE_H
#define SUMMARIZE_H

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

// Structure to hold processed results
struct processed_results {
  std::vector<std::string> sorted_words;
  std::string smallest_word;
  std::string largest_word;
  size_t word_count;
};

// Function to print the results
void print_results(const processed_results& results) {
  std::cout << results.word_count << " | "
            << results.smallest_word << " | "
            << results.largest_word << " |";
  for (const auto& w : results.sorted_words) {
    std::cout << " " << w;
  }
  std::cout << " |\n";
}

#endif //SUMMARIZE_H
