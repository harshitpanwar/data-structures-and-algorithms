 if(n==0||W==0)
       return 0;
       
       if(dp[n][W]!=-1)
       return dp[n][W];
       
    
        if(wt[n-1]>W)
        
        return dp[n][W] =  knapSack(W, wt, val, n-1);
       
        return dp[n][W] = max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
