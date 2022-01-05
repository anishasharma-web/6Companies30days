
/*
Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/
Title: Minimum Size Subarray Sum
Difficulty: Medium
Author: Anisha Sharma
Language: C++
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int n=nums.size();
        int i=0,j=0,sum=0,m=INT_MAX;
        while(j<n){
            sum=sum+nums[j];
            while(sum >= target){
                m=min(m,j-i+1) ;
                sum=sum-nums[i];
                i++;
            }
            j++;    
        }
    return m == INT_MAX ? 0 : m ;
    }
}; 
