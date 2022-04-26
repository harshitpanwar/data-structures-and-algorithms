#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<bool> dp(n, false);
        
        dp[n-1] = true;
        
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<=nums[i] && j+i<n;j++){
                if(dp[j+i]){
                    dp[i]=true;
                    break;
                }
            }
        }
        
        return dp[0];
        
    }
};

int main(){

    //driver code goes here

    return 0;
}