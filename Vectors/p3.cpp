// single number leetcode

#include <iostream>
#include <vector>
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int ans = 0;
             
            for(int val: nums){
                ans = ans ^ val;
            }
    
            return ans;
        }
    
    
    };