#include<bits/stdc++.h>
using namespace std;

int main(){
    //driver code here
    return 0;
}


class Solution {
public:
    void solve(vector<int>& nums,vector<int>&v,vector<vector<int>>&ans,int freq[])
    {
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }  
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
               freq[i]=1;
                v.push_back(nums[i]);
                solve(nums,v,ans,freq);
                freq[i]=0;
                v.pop_back();
            }   
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
     vector<int>v;
        vector<vector<int>>ans;
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)freq[i]=0;
        solve(nums,v,ans,freq);
        return ans;
    }
};