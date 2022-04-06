/*
Stable - When elements are equal, their order should not change after sorting 
Inplace - Is the sorting algorithm using space  <= O(Log n)

SELCTION SORT:
Stable? No
Inplace? Yes
Best Time complexity - O(n^2)
average time complexity - O(n^2)
worst time complexity - O(n^2)
Advantages: Easy to work with expensive systems
            Doesn't take auxiliary space
Disadvantages: Whether sorted or not, time complexity is n^2

 */

#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
} 


void selectionSort(int *arr, int n){

    
    for(int i =0; i<n ;i++){
        int min = arr[0];
        int pos = i;
        for(int j=i; j<n;j++){

            if(arr[j]<=min){
                pos = j;
                min = arr[j];
            }
        }

        int temp = arr[i];
        arr[i] = arr [pos];
        arr[pos] = temp;

    }    

}

int main(){

    int arr[10] = {10,9,8,7,6,5,4,3,2,1};

    int n = 10;

    printArray(arr, n);

    selectionSort(arr, n);

    printArray(arr, n);

    return 0;
}