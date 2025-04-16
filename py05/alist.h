//
// Created by jlopes on 07-03-2025.
//

#ifndef ALIST_H
#define ALIST_H

#include <iostream>
#include <cstring> // For memcpy

struct alist {
  int size;       // Number of elements
  int* elements;  // List elements
};

// Helper functions

alist* build(int n, int v[]) {
  alist* new_list = new alist;
  new_list->size = n;
  new_list->elements = new int[n];
  memcpy(new_list->elements, v, n * sizeof(int));
  return new_list;
}

alist* empty() {
  alist* new_list = new alist;
  new_list->size = 0;
  new_list->elements = nullptr;
  return new_list;
}

void destroy(alist* al) {
  if (al) {
    delete[] al->elements;
    delete al;
  }
}

void print(alist* al) {
  if (!al || al->size == 0) {
    std::cout << "[]" << '\n';
    return;
  }
  std::cout << "[";
  for (int i = 0; i < al->size; i++) {
    std::cout << al->elements[i];
    if (i < al->size - 1) std::cout << ", ";
  }
  std::cout << "]" << '\n';
}

#endif //ALIST_H
