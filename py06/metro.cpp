#include <iostream>
#include <vector>
#include <algorithm>

int intersections(const std::vector<std::vector<std::string>>& lines) {
    int res = 0;

    for (size_t i = 0; i < lines.size(); i++) {
        for (size_t j = i + 1; j < lines.size(); j++) {

            if (lines[i].front() == lines[j].front() ||
                lines[i].front() == lines[j].back() ||
                lines[i].back() == lines[j].front() ||
                lines[i].back() == lines[j].back()) {
                continue;
            }

            std::vector<std::string> seen;

            for (size_t k = 1; k < lines[i].size() - 1; k++) {
                const std::string& station = lines[i][k];

                
                if (station != lines[j].front() && station != lines[j].back() &&
                    std::find(lines[j].begin(), lines[j].end(), station) != lines[j].end() &&
                    std::find(seen.begin(), seen.end(), station) == seen.end()) {

                    res++;
                    seen.push_back(station);
                }
            }
        }
    }

    return res;
}
