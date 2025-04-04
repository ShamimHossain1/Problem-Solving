
#include <iostream>
#include <vector>
// Solution 1: (Brute Force)
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++){
                    if (nums[i] + nums[j] == target){
                        return std::vector<int> {i, j};
                    }                        
                }
            }
            return {};
            
        }
    };


