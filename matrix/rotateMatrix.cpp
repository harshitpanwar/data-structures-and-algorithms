#include<bits/stdc++.h>
using namespace std;

void printarr(vector<vector<int>>& v){

    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
    }
}

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){

    vector<vector<int>> v;

    int n;
    int size;
    cin>>size>>n;

    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    

    // int size = sizeof(arr)/sizeof(*arr);

    for(int i=0;i<size;i++){
            vector<int> vec;
        for(int j=0;j<size;j++){
            vec.push_back(arr[i][j]);
        }
        v.push_back(vec);
    }

    // printarr(v);

    // cout<<"enter size of array"<<endl;
    // int n = 3;
    // cin>>n;
    n = n%4;
    // cout<<endl;
    if(n!=2&&n!=0)
        if(n==1)
            n=3;
        else
            n=1;

    for(int i=0;i<n;i++){
        rotate(v);
    }
    

    printarr(v);

    return 0;
}