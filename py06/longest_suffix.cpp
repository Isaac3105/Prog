#include <iostream>
#include <vector>

std::string longest_suffix(const std::vector<std::string>& v) {
    if (v.empty()) return "";

    std::string suffix = v[0];

    for (size_t i = 1; i < v.size(); i++) {
        std::string res = "";
        int size = suffix.length() - 1;
        int j = v[i].length() - 1;

        while (size >= 0 && j >= 0 && suffix[size] == v[i][j]) {
            res = v[i][j] + res;
            size--;
            j--;
        }

        suffix = res;
        if (suffix.empty()) break;
    }

    return suffix;
}