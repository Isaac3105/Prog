#include <iostream>
#include <map>
#include <list>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <vector>

using std::map;
using std::string;
using std::list;
using std::pair;


void print_grades(const map<string, list<int>>& grades){

    std::vector<pair<string,double>> avg;
    for(pair<string, list<int>> par : grades){
        double total = 0;
        for(int notas : par.second){
            total += notas;
        }
        avg.push_back({par.first, total/par.second.size()});
    }
    std::sort(avg.begin(),avg.end(),[](pair<string,double> a, pair<string,double> b){return a.second > b.second;});
    for(pair<string,double> v : avg){
        std::cout << v.first << " " << std::fixed << std::setprecision(2)<< v.second << '\n';
    }
    double res = 0;
    for(pair<string,double> notas : avg){
            res += notas.second;
    }
    res /= avg.size();

    std::cout << std::fixed << std::setprecision(2)<< res << '\n';
}