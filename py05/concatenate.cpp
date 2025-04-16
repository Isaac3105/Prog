#include <iostream>
#include <string>

char* concatenate_unique(const char* pa[]) {
    bool seen[256] = {};  
    std::string result;

    for (int i = 0; pa[i] != nullptr; i++) {
        for (size_t j = 0; pa[i][j] != '\0'; j++) {
            unsigned char ch = pa[i][j];
            if (!seen[ch]) {
                seen[ch] = true;
                result += ch;
            }
        }
    }

    char* res = new char[result.size() + 1];
    std::copy(result.begin(), result.end(), res);
    res[result.size()] = '\0';

    return res;
}

