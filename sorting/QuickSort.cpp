/*
Stable - When elements are equal, their order should not change after sorting 
Inplace - Is the sorting algorithm using space  <= O(Log n)

QUICK SORT:
Stable? No
Inplace? yes
Best Time complexity - O(n*log n)
average time complexity - O(n log n)
worst time complexity - O(n^2)
Advantages: Best and Avg Time Complexity are nlogn
            Doesn't take auxiliary space
Disadvantages: Worst time complexity is more than avg

 */

#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int partition(int *arr, int low, int high){
    int i = low, j = high;

    while(i<j){

         do
    {
        i++;
    } while (arr[i]<arr[low]);

    do
    {
        j--;
    } while (arr[j]>arr[low]);

    if(i<j)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }

    }

    int temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;

    return j;

}

void quickSort(int *arr, int low, int high){

    if(low<high){
        int mid = partition(arr, low ,high);

        quickSort(arr, low, mid);
        quickSort(arr, mid+1, high);

    }


}


int main(){
   int arr[10] = {2,4,6,8,10,9,7,5,3,1};

    printArray(arr, 10);

    quickSort(arr, 0, 10);

    printArray(arr, 10);

    return 0;
}