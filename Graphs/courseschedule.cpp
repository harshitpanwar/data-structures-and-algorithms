#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    //detecting cycle
    bool iscycle(vector<int> graph[], vector<int> &vis, int i){
        
        if(vis[i]==1) return true;
        
        if(vis[i]==0){
            
            vis[i]=1;
            
            for(int j:graph[i]){
                
                if(iscycle(graph, vis, j))
                    return true;   
                
            }
        }
        
        vis[i]=2;
        return false;
        
    }
    
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int> graph[n];
        
        for(auto i:pre)
            graph[i[1]].push_back(i[0]);
        
        vector<int> vis(n, 0);
        
        for(int i=0;i<n;i++){
            
            if(iscycle(graph, vis, i))
                return false;
            
        }
        
        return true;
        
    }
};


int main(){

    //driver code goes here
    return 0;
}