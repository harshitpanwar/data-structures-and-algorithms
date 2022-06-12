//problem link
//https://leetcode.com/problems/maximum-erasure-value/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    //using sliding window
    
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,sum=0,res=0;
        unordered_map<int,int> mp;
        while(j<nums.size()){
            if(mp[nums[j]]){ 
                while(mp[nums[j]]){ 
                    mp[nums[i]]--;
                    sum-=nums[i];
                    i++;
                }
            }
            else{
                sum+=nums[j];
                res=max(res,sum); 
                mp[nums[j]]++;
                j++;
            }
        }
        return res;
    }
};


int main(){

    //driver code goes here
    return 0;
}