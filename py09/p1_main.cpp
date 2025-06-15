#include <iostream>
#include <vector>
#include "Time.h"
#include "Event.h"


void events_before(const std::vector<Event>& events, const Time& time){
    bool done = false;
    for(size_t i = 0; i < events.size(); i++){
        if(events[i].get_time().is_before(time)){
            done = true;
            std::cout << events[i].get_title() << " at ";
            events[i].get_time().print_time();
        }
    }
    if(!done){
        std::cout << "No events found.";
    }
}