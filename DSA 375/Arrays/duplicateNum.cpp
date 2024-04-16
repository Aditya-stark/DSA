// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

// Example 2:
// Input: nums = [1,2,3,4]
// Output: false

// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include <bits/stdc++.h>
using namespace std;

int isDuplicate(int arr[], int n){

    unordered_map<int,int> mp;

    int i = 0;
    while(i < n){
        if(mp[arr[i]] != 0 ){
            return true;
        }
        else{
            mp[arr[i]] = 1;
        }
        i++;
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] =  {1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << isDuplicate(arr, n) << endl;

    
    return 0;
}
