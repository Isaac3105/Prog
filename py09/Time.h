//
// Created by jlopes on 01-04-2025.
//

#ifndef TIME_H
#define TIME_H

class Time {
private:
  int hours, minutes;

public:
  // Constructor
  Time(int h, int m);

  // Copy Constructor
  Time(const Time& t);

  // Accessors
  int get_hours() const;
  int get_minutes() const;

  // Comparison function (returns true if this time is earlier than other)
  bool is_before(const Time& other) const;

  // Prints a time
  void print_time();
};

#endif
