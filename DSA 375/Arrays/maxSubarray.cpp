// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);   

    int curr = arr[0];
    int maxTill = arr[0];

    for (int i = 0; i < n; i++)
    {   
        if(curr < 0 || i == 0){
            curr = 0;
        }

        curr = curr + arr[i];

        maxTill = max(curr, maxTill);
    }
    
     cout << "MAX "<<maxTill << endl;

    return 0;
}
