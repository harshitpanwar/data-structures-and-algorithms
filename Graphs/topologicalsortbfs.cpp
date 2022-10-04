#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int n, vector<int> graph[]){

    int indegree[n]={0};

    //firstly mark the indegrees
    for(int i=0;i<n;i++){
        for(auto j:graph[i]){
            indegree[j]++;
        }
    }

    queue<int> q;
    vector<int> ans;

    //push nodes with indegrees 0 into the queue 
    //there will always be atleast one node with indegree 0
    for(int i=0;i<n;i++){
        if(indegree[i]==0)
            q.push(i);
    }

    //iterate while q is not empty
    while(!q.empty()){

        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto it:graph[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);

        }

    }

    return ans;


}


int main(){

    //driver code goes here 
    return 0;
}