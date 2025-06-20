#include <iostream>
#include "Time.h"
#include "Event.h"

Event::Event(std::string t, Time re) : title(t), event_time(re) {}


Event::Event(const Event& e) : title(e.title), event_time(e.event_time) {}


std::string Event::get_title() const{
    return title;
}

Time Event::get_time() const{
    return event_time;
}