#include<bits/stdc++.h>
using namespace std;

void findlps(char *str){

    int maxLength = 2;
    int len = strlen(str);
    int low, high, start, i;
    for(i=1;i<len;i++){
        //code for even length of palindrome
        low = i-1;
        high = i;
        while(low>=0 && high<len && str[low]==str[high]){

            if(high-low+1>maxLength){
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }


        //code for odd length of palindrome
        low = i-1;
        high = i+1;
        while(low>=0 && high<len && str[low]==str[high]){

            if(high-low+1>maxLength){
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }

    for(i=start;i<=start+maxLength;i++){
        cout<<str[i]<<"\t";
    }

}

int main(){

    char str[11] = "abcracecar";

    findlps(str);

    return 0;
}