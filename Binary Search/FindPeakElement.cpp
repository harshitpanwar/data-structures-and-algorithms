#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        
        if(n==1) return 0;
        
        if(a[n-1] > a[n-2]) return n-1;
        
        else if(a[0] > a[1]) return 0;
        
        int start = 1, end = n-2;
        while(start<=end){
            
            int mid = start + (end-start)/2;
            
            if(a[mid] > a[mid-1] && a[mid] > a[mid+1]) return mid;
            
            else if(a[mid-1] > a[mid]) end = mid-1;
            
            else start = mid+1;
        }
        return -1;
    }
};