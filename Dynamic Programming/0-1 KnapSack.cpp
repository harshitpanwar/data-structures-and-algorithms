#include<bits/stdc++.h>
using namespace std;
   

    static int dp[1001][1001];



    int answer(int W, int wt[], int val[], int n )
    {
         if(n==0||W==0)
       return 0;
       
       if(dp[n][W]!=-1)
       return dp[n][W];
       
    
        if(wt[n-1]>W)
        
        return dp[n][W] =  answer(W, wt, val, n-1);
       
        return dp[n][W] = max(val[n-1]+answer(W-wt[n-1], wt, val, n-1), answer(W, wt, val, n-1));

    }



     int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp, -1, sizeof(dp));
       return answer(W, wt , val , n);
       
      
       
    }


// add main function here and add call knapsack function by giving it all the values