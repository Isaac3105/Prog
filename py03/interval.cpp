#include "iostream"
#include "interval.h"




interval intersection(interval a, interval b){
    time_of_day comeco;
    time_of_day fim;
    time_of_day c = {0,0};
    interval c2;
    interval res;
    c2.start = c;
    c2.end = c;

    if(a.end.h < b.start.h || b.end.h < a.start.h) return c2;

    if((a.start.h < b.start.h) || (a.start.h == b.start.h && a.start.m <= b.start.m)){
        comeco = b.start;
    }
    else if((b.start.h < a.start.h) || (b.start.h == a.start.h && b.start.m <= a.start.m)){
        comeco = a.start;
    }
    if((a.end.h < b.end.h) || (a.end.h == b.end.h && a.end.m <= b.end.m)){
        fim = a.end;
    }
    else if((b.end.h < a.end.h) || (b.end.h == a.end.h && b.end.m <= a.end.m)){
        fim = b.end;
    }

    res = {comeco,fim};
    if(res.start.h == res.end.h && res.start.m >= res.end.m) return c2;
    return res;
}