// Method 1:
// Simply sort the two given strings and compare their values.
// If the values are equal then they are anagrams else they are not.

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
        
//         if(s.length()!= t.length()){
//             return false;
//         }
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
        
//         if(s==t){
//             return true;
//         }
//         return false;
        
//     }
// };
// Method 2(optimised):
// Create an additional array to map all the values of the string and count the number of times a single character is occuring in the string.
// Once all the characters have been mapped with their frequency onto the array, iterate through the other string and subtract value of character on the array by one for every occurance.
// After Both the operations are finished the array should contain only 0's .
// Check the array for non-zero's and if all values are 0 the strings are anagrams else they are not.

#include<bits/stdc++.h>
using namespace std;

int main(){

    //driver code goes here
    
    return 0;
}

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int a[26]={0};
        
		// map all character values in the array and increment by one for every occurance
		
        for(auto c : s){
            
            a[c-'a']++;

        }
		
		// now decrement values in the array one by one
		
        for(auto c: t){
            a[c-'a']--;
        }
		
		// check if the array has any non-zero's
		
        for(auto i:a){
            if(i!=0)
                return false;
        }
        return true;
    }
};