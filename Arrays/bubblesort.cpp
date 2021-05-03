#include<iostream>
using namespace std;


void bubbleSort(int a[], int n){

    int count=1;
    while(count<n){

        for(int i = 0;i<n-count;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }    


        count++;
    }



}


int main(){


    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    bubbleSort(a,n);
    
    for(int i =0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}





