#include<iostream>
using namespace std;


void selectionSort(int a[], int n)
{

    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
                {
                    int temp = a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    
                }
        }
    }

}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    selectionSort(a,n);
    for(int i =0;i<n;i++)
    cout<<a[i]<<" ";


    return 0;
}