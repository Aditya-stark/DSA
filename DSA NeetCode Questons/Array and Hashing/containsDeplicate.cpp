#include <bits/stdc++.h>
using namespace std;

// Functions

bool containsDuplicate(int* nums, int numsSize) 
{
    if(nums == nullptr || numsSize <= 1){
        return false;
    }

    unordered_map<int, int> mp;

    for (const auto it : nums) {
        mp[it]++;
    }

    for (const auto it : mp) {
        if (it.second >= 2) {
            return true;
        }
    }
    return false;
 
}




int main(){

    int nums[5];
    int numSize = sizeof(nums)/sizeof(int);

    containsDuplicate(nums, numSize)

    

    return 0;
}