//
// Created by jlopes on 12-03-2025.
//

#ifndef PRINT_ROW_H
#define PRINT_ROW_H

#include <vector>
#include <string>
#include <iostream>

void print(std::vector<std::string> result) {
  int n = result.size();
  std::cout << '"';
  if (n > 0) {
    std::cout << result[0];
    for (int i = 1; i < n; i++) {
      std::cout << ' ' << result[i];
    }
  }
  std::cout << "\"\n";
}

#endif //PRINT_ROW_H
