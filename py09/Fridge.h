#ifndef FRIDGE_H
#define FRIDGE_H

#include "Item.h"
#include <vector>

class Fridge {
private:
  std::vector<Item> items;

public:
  Fridge();
  void add(Item item);
  // Consumes a quantity of an item. If the item is used up, it should be removed.
  void consume(std::string name, double quantity);
  void remove_expired(const Date& date);
  void print();
};

#endif // FRIDGE_H