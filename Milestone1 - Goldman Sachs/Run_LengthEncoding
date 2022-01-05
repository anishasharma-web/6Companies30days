/*
Problem Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
Title: Run Length Encoding
Difficulty: Easy
Author: Anisha Sharma
Language: C++
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string encode(string src);    
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string ans="";
  int c=0;
  for(int i=0;i<src.size();i++){
      c++;
      if(src[i]!=src[i+1]|| i==src.size()-1){
      ans.push_back(src[i]);
      ans.push_back(c+'0');
      c=0;
    }
  }return ans; 
}
 
