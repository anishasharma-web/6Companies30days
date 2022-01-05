/*
Problem Link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
Title: Print Anagrams Together
Difficulty: Medium
Author: Anisha Sharma
Language: C++
*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        map<string,vector<string>>m;
        for(int i=0;i<s.size();i++)
            { string a=s[i];
              sort(a.begin(),a.end());
              m[a].push_back(s[i]);
            }
        vector<vector<string>>ans;
        for(auto i:m){
            ans.push_back(i.second);
        }return ans;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
