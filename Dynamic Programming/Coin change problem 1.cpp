
// Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins. 

// Example 1:

// Input:
// n = 4 , m = 3
// S[] = {1,2,3}
// Output: 4
// Explanation: Four Possible ways are:
// {1,1,1,1},{1,1,2},{2,2},{1,3}.

// â€‹Example 2:

// Input:
// n = 10 , m = 4
// S[] ={2,5,3,6}
// Output: 5
// Explanation: Five Possible ways are:
// {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} 
// and {5,5}.




long long int count( int S[], int m, int n )
    {
       
      
        long long int t[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            t[i][0] = 1;
        }
        for(int j=1;j<=n;j++)
        {
            t[0][j] = 0;
            }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    t[i][j] = t[i-1][j] + t[i][j-S[i-1]];
                }
                else
                {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[m][n];
    }