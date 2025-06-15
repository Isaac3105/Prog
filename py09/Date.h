#ifndef DATE_H
#define DATE_H

class Date {
private:
  int day, month, year;

public:
  Date(int d, int m, int y);
  int get_day() const;
  int get_month() const;
  int get_year() const;
  bool is_before(const Date& other) const;
  void print(); // prints the date in the format "dd-mm-yyyy"
};

#endif // DATE_H