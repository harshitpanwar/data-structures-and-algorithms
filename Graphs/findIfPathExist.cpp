#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code goes here
    
}

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>> graph;

        for(auto e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        queue<int> q;
        q.push(source);

        vector<int> visited(n, 0);
        visited[source]=1;

        while(!q.empty()){

            int cur = q.front();
            q.pop();

            if(cur==destination) return true;

            for(auto i:graph[cur]){
                
                if(!visited[i]==1){
                    visited[i]=1;
                    q.push(i);
                }

            }


        }

        return false;

    }
};