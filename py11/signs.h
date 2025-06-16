#ifndef SIGN_H
#define SIGN_H

#include <string>
#include <map>
#include <vector>

enum sign_type {
    STOP,
    SPEED_LIMIT,
    ROUNDABOUT
};

struct sign {
    sign_type type;
    int year;
    std::string location;
};

class SignDB {
public:
    SignDB();
    void addSign(const sign& sign);
    // Returns all the signs at a given road, with the oldets signs first
    std::vector<sign> getSignsAt(const std::string& road) const;

private:
    // Keeps signs based on their location
    std::map<std::string, std::vector<sign>> signs;
};

#endif // SIGN_H
