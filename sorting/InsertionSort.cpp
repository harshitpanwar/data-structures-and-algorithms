/*
Stable - When elements are equal, their order should not change after sorting 
Inplace - Is the sorting algorithm using space  <= O(Log n)

INSERTION SORT:
Stable? yes
Inplace? yes
Best Time complexity - O(n)
average time complexity - O(n^2)
worst time complexity - O(n^2)
Advantages: When array is sorted, takes O(n)
            Doesn't take auxiliary space
Disadvantages: When memory read / write is expensive, insertion sort is not efficient

 */


#include<bits/stdc++.h>
using namespace std;


void printArray(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void insertionSort(int *arr, int n){

    for(int i=1;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }


}

int main(){

   int arr[10] = {2,4,6,8,10,9,7,5,3,1};

    printArray(arr, 10);

    insertionSort(arr, 10);

    printArray(arr, 10);

    return 0;
}