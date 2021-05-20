#include<bits/stdc++.h>
using namespace std;

static int dp[1001][801];
// #define mod 1000000007;

//Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.






int solve(int n, int r){
        if(r>n)
        return 0;
        if(r==0||n==r)
        return dp[n][r] = 1;
        
        
        if(dp[n][r]!=-1)
        return dp[n][r]%1000000007;
        
        return dp[n][r] = (solve(n-1, r-1)%1000000007 + solve(n-1,r)%1000000007)%1000000007;
        

    
}




        int nCr(int n, int r){
            
            memset(dp, -1, sizeof(dp));
            
            return solve(n, r);
            
            }

    