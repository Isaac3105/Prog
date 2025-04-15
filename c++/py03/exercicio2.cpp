#include "iostream"
#include "amount.h"


amount change(amount given, amount price) {
    amount res;
    res.euros = given.euros - price.euros;
    res.cents = given.cents - price.cents;
    if(res.cents<0){
        res.euros--;    
        res.cents = 100 + res.cents;
    }
    return res;
}   