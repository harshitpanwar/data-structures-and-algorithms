#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> toposort(vector<vector<int>> &g, vector<int> &indegree, int n){
        
        vector<int> ans;
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            
            if(indegree[i]==0)
                q.push(i);
            
        }
        
        while(!q.empty()){
            
            int node = q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto j:g[node]){
                indegree[j]--;
                if(indegree[j]==0) q.push(j);
            }
            
        }
        
        return ans;
        
    }
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<vector<int>> g(n);
        vector<int> indegree(n,0);
        
        for(int i=0;i<n;i++){
            
            for(auto j:graph[i]){
                
                g[j].push_back(i);
                indegree[i]++;
                
            }
            
        }
        
        vector<int> ans = toposort(g, indegree, n);
        
        sort(ans.begin(), ans.end());
        return ans;        
        
    }
};

int main(){

    //driver code goes here

    return 0;
}