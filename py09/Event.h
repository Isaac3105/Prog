//
// Created by jlopes on 01-04-2025.
//

#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Time.h"

class Event {
private:
  std::string title;
  Time event_time;

public:
  // Constructor
  Event(std::string t, Time time);

  // Copy Constructor
  Event(const Event& e);

  // Accessors
  std::string get_title() const;
  Time get_time() const;
};

#endif

