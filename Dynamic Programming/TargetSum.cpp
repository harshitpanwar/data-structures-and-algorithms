#include<bits/stdc++.h>
using namespace std;

int res=0;

void print_res(vector<int> &sol){
    for(auto i:sol)
    cout<<i<<"\t";
    cout<<endl;
}


void solve(int n, vector<int> &nums, int sum, int target, int i){
    if(i==n+1)
        return ;
    if(sum==target && i==n) res++;
    
    int cur = nums[i];
    
    solve(n, nums, sum+cur, target, i+1);
    solve(n, nums, sum-cur, target, i+1);
}


int findTargetSumWays(vector<int>& nums, int target) {
    
    if(nums.size()==1 and nums[0]==target)
        return 1;
    
    solve(nums.size(), nums, 0, target, 0);
    
    return res;
    
    
}
int main(){

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    cout<<findTargetSumWays(nums, 0);
    return 0;
    }