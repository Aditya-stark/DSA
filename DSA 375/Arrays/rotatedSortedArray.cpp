// There is an integer array nums sorted in ascending order (with distinct values). Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:
// Input: nums = [1], target = 0
// Output: -1

#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findTargetIndex(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }

        if (arr[start] <= arr[mid])
        {
            if (target >= arr[start] && target < arr[mid])
            {
                return bSearch(arr, start, mid - 1, target);
            }
            else
            {
                start += 1;
            }
        }
        else
        {
            if (target > arr[mid] && target <= arr[end])
            {
                return bSearch(arr, mid + 1, end, target);
            }
            else
            {
                end -= 1;
            }

            
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    cout << "Result = " << findTargetIndex(arr, n, target) << endl;

    return 0;
}
