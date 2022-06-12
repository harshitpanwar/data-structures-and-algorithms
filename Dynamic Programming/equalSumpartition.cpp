#include<bits/stdc++.h>
using namespace std;


bool solve(int i, vector<int> &arr, int target, int sum, int n){

    if(sum == target)
    {
        return true;
    }

    if(i==n){
        return false;
    }


    bool a = solve(i+1, arr, target, sum+arr[i], n);
  
    bool b = solve(i+1, arr, target, sum, n);

    return a||b;

}

int main(){

    vector<int> arr;
    vector<int> v;

    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(9);

    bool a = solve(0, arr, 6, 0, 5);

    for(auto i:res)
    {
        for(auto j:i)
        cout<<j<<"\t";
        cout<<endl;
    }
    cout<<a<<endl;
    


    return 0;
}