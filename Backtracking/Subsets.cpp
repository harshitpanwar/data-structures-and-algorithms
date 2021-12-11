#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code here

    return 0;
}



class Solution {
public:
    
    vector <vector <int>> powerSet;
    void getSubset(vector<int> &nums, vector<int> subset, int i) {
        if (i == nums.size()) {
            powerSet.push_back(subset);
            return;
        }
        
        // accepting element
        subset.push_back(nums[i]);
        getSubset(nums, subset, i + 1);
        
        // rejecting element
        subset.pop_back();
        getSubset(nums, subset, i + 1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> subset;
        getSubset(nums, subset, 0);
        return powerSet;
    }
};