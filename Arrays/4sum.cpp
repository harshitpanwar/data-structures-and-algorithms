#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code goes here

    return 0;
}


class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1])
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(j>i+1 && nums[j]==nums[j-1])
            continue;
            
            long long tar=target-nums[i]*1L-nums[j];
            
            int s=j+1,e=n-1;
            while(s<e)
            {
                if(nums[s]+nums[e] < tar)
                    s++;
                else if(nums[s]+nums[e] > tar)
                    e--;
                else
                {
                    ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                    
                    int val=nums[s];
                    while(s<e && nums[s]==val)
                        s++;
                    
                    val=nums[e];
                    while(s<e && nums[e]==val)
                        e--;
                }
            }
        }
    }
    return ans;
}
};