#ifndef BFEUP_H
#define BFEUP_H

#include <iostream>
#include <vector>

enum action { DEPOSIT, WITHDRAW };

struct movement {
  action act;
  int amount;
  int day;
  int month;
  int year;
};

class BFEUP {
public:
  // Constructor
  BFEUP();

  // Adds a transaction to the account
  void add_movement(action act, int amount, int day, int month, int year);

  // Returns the balance of the account for a given month and year
  int balance(int month, int year);

  // Prints all transactions for a given month and year
  void print_movements(int month, int year);

private:
  std::vector<movement> movements;
};

std::string dm_to_string(int n) {
  if (n < 10) return "0" + std::to_string(n);
  return std::to_string(n);
}

std::ostream &operator<<(std::ostream &out, const movement &m) {
  out << dm_to_string(m.day) << "-" << dm_to_string(m.month) << "-" << m.year << ": ";
  if (m.act == DEPOSIT) out << "+";
  else out << "-";
  out << m.amount;
  return out;
}

#endif
