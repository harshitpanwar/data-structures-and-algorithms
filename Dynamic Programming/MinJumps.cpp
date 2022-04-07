#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> v(n, 0);
        
        
        for(int i = 1;i<n;i++){
            
            int minValue = INT_MAX;
            
            for(int j  = i-1; j>=0; j--){
                
                if((i-j)<= nums[j])
                    minValue = min(minValue, v[j] + 1);
                
            }
            
            v[i] = minValue;
            
        }
        
        return v[n-1];
        
        }
};


int main(){

    //driver code here

    return 0;
}

