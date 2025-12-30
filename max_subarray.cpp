
#include <iostream>
#include<vector>
using namespace std;

// to find maximum subarray using kandane's algorithum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current =0 ;
        int maxvalue = __WINT_MIN__;

        for(int value : nums){
            current += value;
            maxvalue = max(current,maxvalue);

            if(current< 0){
                current =0;
            }
        }
        return maxvalue ;
    }
    
};