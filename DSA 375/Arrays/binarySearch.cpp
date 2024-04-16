#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){

    sort(arr,arr+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i]<< ", ";
    // }

    int start = arr[0];
    int end = arr[n - 1];
    int mid = (start+end)/2;
    int i = 0;

    while(start < end){
        cout<<"loop:- "<<i<<endl;
        if(target == mid){
            cout<<"Mid= "<<mid<<endl;
            return i;
        }
        else if (target > mid)
        {
            start = mid;
        }else if (target < mid)
        {
            end = mid;
        }
        else{
            return -1;
        }
        mid = (start + end)/2;
        i++;
    }

}

int main(int argc, char const *argv[])
{
    int arr[100];
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 78;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    

    cout<<"result = "<<binarySearch(arr, n, target);

    return 0;
}
