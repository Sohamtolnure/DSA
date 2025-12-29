#include <iostream>
#include <vector>
using namespace std;

//bubble sort

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i = 0;i< nums.size() ;i++){
            for(int j = 0;j<nums.size() -1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;  
    }
};
int main(){
    Solution s;

    vector<int> nums = {5, 3, 8, 1, 2};

    vector<int> result = s.sortArray(nums);

    cout << "Sorted array: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
    }