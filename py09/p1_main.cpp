#include <iostream>
#include <vector>
#include "Time.h"
#include "Event.h"


void events_before(const std::vector<Event>& events, const Time& time){
    for(size_t i = 0; i < events.size(); i++){
        if(events[i].get_time().is_before(time)){
            std::cout << events[i].get_title() << events[i].get_time() << std::endl;
        }
    }
}