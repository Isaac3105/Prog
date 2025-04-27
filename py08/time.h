#ifndef TIME_H
#define TIME_H

class Time {
public:
  // Empty constructor
  Time();

  // Constructor with hours and minutes
  Time(int h, int m);

  // Increases the time by one minute
  void tick();

  // Adds another time to the current time
  void add(const Time &t);

  // Prints the time in the format HH:MM
  void print();

private:
  int hours;
  int minutes;
};

#endif // TIME_H
