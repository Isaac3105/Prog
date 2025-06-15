#ifndef ITEM_H
#define ITEM_H

#include "Date.h"
#include <string>

class Item {
private:
  std::string name;
  double quantity;
  Date expiration;

public:
  Item(std::string n, double q, Date e);
  std::string get_name() const;
  double get_quantity() const;
  Date get_expiration() const;
  bool is_expired(const Date& date) const;
  // Uses a quantity of the item. Returns true if there is any quantity left.
  bool use(double quantity);
  void print(); // prints the item in the format "name: (quantity) - expiration"
};

#endif // ITEM_H