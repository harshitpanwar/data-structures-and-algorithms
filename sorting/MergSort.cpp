/*
Stable - When elements are equal, their order should not change after sorting 
Inplace - Is the sorting algorithm using space  <= O(Log n)

MERVE SORT:
Stable? yes
Inplace? No
Best Time complexity - O(nlogn).
average time complexity - O(nlogn).
worst time complexity - O(nlogn).
Advantages: Best, Avg, Worst Time Complexity are nlogn.
Disadvantages: Auxiliary Space.

 */



#include<bits/stdc++.h>
using namespace std;

void sortt(int *arr, int low, int mid, int high){

    int i,j,k;
    int *n1,*n2;

    int size_n1 = mid-low+1, size_n2 = high - mid;

    n1 = (int*)malloc(sizeof(int)*size_n1);
    n2 = (int*)malloc(sizeof(int)*size_n2);

    for(i=0;i<size_n1;i++){
        n1[i] = arr[low+i];
    for(j=0;j<size_n2;j++){
        n2[j] = arr[mid+j+1];
    }

    i = j = 0;

    k = low;

    while(i<size_n1 && j<size_n2){

        if(n1[i] <= n2[j]){
            arr[k++] = n1[i++];
        }
        else
            arr[k++] = n2[j++];

    }

    while (i<size_n1)
    {
        arr[k++] = n1[i++];
    }
    
    while (j<size_n2)
    {
        arr[k++] = n2[j++];

    }

    }

}

void printArray(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void mergeSort(int *arr, int low, int high){
    if(low<high){
        int mid = (low+high)/2;

        mergeSort(arr, low, mid);

        mergeSort(arr, mid+1, high);

        sortt(arr, low, mid, high);
    }

}


int main(){


    int arr[10] = {2,4,6,8,10,9,7,5,3,1};

    int n = 10;

    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    printArray(arr, n);

    return 0;
}