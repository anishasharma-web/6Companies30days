/*
Problem Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
Title: Count the subarrays having product less than k
Difficulty: Hard
Author: Anisha Sharma
Language: C++
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
     long long left=0,right=0,prod=1,c=0; 
     
       while(right<n){          
        
         prod=prod*a[right];
         
         while ( prod >= k)
            prod /= a[left++];
        
         c+=right-left+1;
         right++;
         }
     return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
