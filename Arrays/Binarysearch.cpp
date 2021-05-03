#include<iostream>
using namespace std;



int binarySearch(int a[], int n, int key){

    int low = 0;
    int high = n-1;
    

    while(low<=high){

        int mid = (low + high)/2;

        if(a[mid]==key)
        return mid;

       
        
        if(key<a[mid])
        high = mid-1;

        if(key>a[mid])
        low = mid+1;



    }
    return -1;



}


int main(){


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;
  
    return 0;



}