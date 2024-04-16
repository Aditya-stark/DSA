// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

// Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
// Output: Minimum Difference is 6 


#include <bits/stdc++.h>
using namespace std;

int diffe(int arr[], int n, int m){

    if(n == 0 || m == 0){
        return 0;
    }

    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i]<< ", ";
    // }
    // cout<<endl;


    int diff = arr[n-1];

    for (int i = 0; i <= n - m; i++)
    {
        if(arr[i + m -1] - arr[i]  < diff){
            diff = arr[i + m - 1] - arr[i];
        }
        // cout << arr[i + m - 1] <<" - "<< arr[i]<<endl; 
        // cout<< i <<"Min Difference: "<<diff<<endl;
    }

    
    
    return diff;

}

int main(int argc, char const *argv[])
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56} ;

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 3;

    cout<<"Min Difference: "<<diffe(arr, n, m);


    return 0;
}

