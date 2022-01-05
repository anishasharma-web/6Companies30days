/*
Problem Link: Not Given
Title: Find max 10 numbers in a list having 10M entries.
Difficulty: Medium
Author: Anisha Sharma
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void largest(int A[],int n,int k)
    {
        vector<int> ans;
        priority_queue<int> p;
        for(int i=0;i<n;i++)
            p.push(A[i]);
        for(int i=0;i<k;i++)
        {
            ans.push_back(p.top());
            p.pop();
        }
        for(auto i:ans)
            cout<<i<<" ";
    }
};
