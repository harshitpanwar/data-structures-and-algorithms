#include<bits/stdc++.h>
using namespace std;

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

int main(){

    //driver code goes here
    return 0;
}