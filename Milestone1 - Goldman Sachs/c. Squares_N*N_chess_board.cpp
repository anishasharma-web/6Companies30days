
/*
Problem Link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1#
Title: Find total number of Squares in a N*N chessboard
Difficulty: Basic
Author: Anisha Sharma
Language: C++
*/
// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        return N*(N+1)*(2*N+1)/6;
      
      /*BY RECURSION 
        if(N==1) return 1;
        return (N*N)+squaresInChessBoard(N-1);*/
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
