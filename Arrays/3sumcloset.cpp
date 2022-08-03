#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code goes here

    return 0;
}

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
                
        int mini = 1e8;

        sort(nums.begin(), nums.end());

        int sum=0;
        for(auto i:nums) sum+=i;
        
        int n = nums.size();
        int start, end, tgt;
        
        for(int i=0;i<n-2;i++){
            
            start = i+1;
            end = n-1;
            
            while(start<end){
                 
                int cur_sum = nums[i] + nums[start] + nums[end];
                
                if(cur_sum==target)
                    return cur_sum;
                
                if(abs(cur_sum-target)<abs(target-mini))
                    mini = cur_sum;
                
                if(cur_sum > target) end--;
                else start++;
            }
            
        }
        
        return mini;
    }
};