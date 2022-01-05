/*
Problem Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
Title: Array Pair Sum Divisibility Problem
Difficulty: Easy
Author: Anisha Sharma
Language: C++
*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        vector<int> ans(k,0);
        for(int i=0;i<nums.size();i++){
            int x = nums[i]%k;
            if(x == 0){
               if(ans[x]==0)
                 ans[x]++; 
               else
                 ans[x]--;
             continue;
            }
            
            if(ans[x]==0){
             ans[k-x]++;
            }
            else{
             ans[x]--;
            }
        }
        for(int i=0;i<k;i++){
            if(ans[i]>0)return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
