#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.length(), dp[n][n];
        
        memset(dp, false, sizeof(dp));
        
        int length=1;
        int start_index = 0;
        for(int i=0;i<n;i++){
            start_index = i;
            dp[i][i]=true;
            length = 1;
        }
        
        for(int i=0;i<n-1;i++)
            if(s[i]==s[i+1]){
                start_index = i;
                dp[i][i+1]=true;
                length=2;
            }
        
        for(int k=3;k<=n;k++){
            
            for(int i=0;i<=n-k;i++){
                
                int j = i+k-1;
                
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    start_index = i;
                    dp[i][j]=true;
                    length = max(length, k);
                }
                    
            }
        }
        
        return s.substr(start_index, length);
        
    }
};

int main(){


    //driver code goes here
    return 0;
}