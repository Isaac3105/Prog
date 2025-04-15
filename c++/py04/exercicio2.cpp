#include "iostream"


int score(char word[], int n){
    int res = 0;
    int points[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    for(int i = 0; i<n; i++){
        if(!isalpha(word[i])){
            continue;
        }
        else{
            int index = ((int) word[i] - (int) 'a');
            res += points[index];
        }
    }
    return res;
}

