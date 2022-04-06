/*
Stable - When elements are equal, their order should not change after sorting 
Inplace - Is the sorting algorithm using space  <= O(Log n)

BUBBLE SORT:
Stable
Inplace
Best Time complexity - O(n)
average time complexity - O(n^2)
worst time complexity - O(n^2)
Advantages: When array is sorted, takes O(n)
            Doesn't take auxiliary space
Disadvantages: When memory read / write is expensive, bubble sort is not efficient

 */

#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void bubbleSort(int *arr, int n){

    for(int i=0;i<n;i++){

        //checking if the array is already sorted and if it is sorted then we can just return from there.
        int swap = 0;
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j])
            {
                int c = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = c;
                swap = 1;
            }
        }

        //if no swap done then we can returnn form the function directly 
        if(swap==0) return;
        
    }


}

int main(){

    int arr[10] = {2,4,6,8,10,9,7,5,3,1};

    printArray(arr, 10);

    bubbleSort(arr, 10);

    printArray(arr, 10);



    return 0;
}

