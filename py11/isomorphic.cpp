#include <iostream>
#include <vector>
#include <utility>

bool isomorphic(std::string& a, std::string& b){
    if(a.size() != b.size()) return false;

    std::vector<std::pair<char,char>> store;  

    for(size_t i = 0; i < a.size(); i++){
        bool done = false;
        for(std::pair<char,char> v : store){
            if (v.first == a[i] && v.second != b[i]){
                return false;
            }
            else if (v.first == a[i] && v.second == b[i]){
                done = true;
                break;
            }
        }
        if(!done){
            store.push_back({a[i],b[i]});
        }
    }
    store.clear();
    for(size_t i = 0; i < a.size(); i++){
        bool done = false;
        for(std::pair<char,char> v : store){
            if (v.first == b[i] && v.second != a[i]){
                return false;
            }
            else if (v.first == b[i] && v.second == a[i]){
                done = true;
                break;
            }
        }
        if(!done){
            store.push_back({b[i],a[i]});
        }
    }
    return true;
}
