#include <iostream>
#include <vector>


int main(){
    int num1,num2,c,diff;
    std::cin >> num1;
    std::vector<int> nums(num1);
    for(int i = 0; i <= num1-1; i++){
        std::cin >> num2;
        nums[i] = num2;
    }
    diff = 0;
    c = 1;
    int max = 0;
    for(int i = 0;i <= num1-2; i++){
        if(diff == nums[i+1] - nums[i]){
            c++;
            max = c;
        }
        else{
            diff = nums[i+1] - nums[i];
            if(c > max){
                max = c;
            }
            c = 1;
        }
    }
    std::cout << max + 1 << '\n';
    return max + 1;
}