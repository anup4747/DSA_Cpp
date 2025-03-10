#include<iostream>
#include<vector>
using namespace std;

// Solved solution in Leetcode Moore's voting alogrithm

class Solution {
    public
        int majorityElement(vector<int>& nums) {
    
            int ans = nums[0];
            int n = nums.size();
            int freq = 0;
    
            for (int i = 0; i < n; i++) {
                if (freq == 0) {
                    ans = nums[i];
                }
                if (ans == nums[i]) {
                    freq++;
    
                } else {
                    freq--;
                }
            }
    
            int count = 0;
    
            for(int val : nums){
                if (val == ans){
                    count++;
                }
            }
    
            if(count > n/2) {
                return ans;
            }
            else{
                return -1;
            } 
    
            
          
        }
    };
    