//
// Created by jlopes on 12-03-2025.
//

#ifndef PRINT_VECTOR_H
#define PRINT_VECTOR_H

#include <iostream>
#include <vector>

template <typename T>
void print(const std::vector<T>& v) {
  std::cout << "[";
  for (size_t i = 0; i < v.size(); ++i) {
    std::cout << v[i];
    if (i < v.size() - 1) std::cout << ", ";
  }
  std::cout << "]\n";
}

#endif // PRINT_VECTOR_H
