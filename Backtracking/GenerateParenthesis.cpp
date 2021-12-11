#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code here

    return 0;
}


class Solution {
public:
    void solve(int open,int close,int n,string s,vector<string>&ans)
    {
        if(open==0 and close==0)
        {
            ans.push_back(s);
            return ;
        }
        if(open>0)
        {
            solve(open-1,close,n,s+'(',ans);
        }
        if(close>0 and open<close)
        {
            solve(open,close-1,n,s+')',ans);
        }
        
            
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string s="";
        vector<string>ans;
        solve(n,n,n,s,ans);
        return ans;
    }
};