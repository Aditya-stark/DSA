#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,-5,67,75};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    int start = 0;
    int end = n - 1;
    int i = 0;
    while(start < end)
    {
        swap(arr[i], arr[n - 1 - i]);
        start++;
        end--;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    

    return 0;
}






// int reverse(int arr[], int n){

//     int tempArr[n];

//     for (int i = 0; i < n; i++)
//     {
//         tempArr[i] = arr[n - 1 - i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << tempArr[i] << " " << endl;
//     }

// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     reverse(arr, n);


//     return 0;
// }



// int main() {
//     int originalArray[] = {1, 2, 3, 4, 5};
//     int length = sizeof(originalArray) / sizeof(originalArray[0]);

//     // Using inbuilt method in C++
//     std::reverse(originalArray, originalArray + length);

//     // Print the reversed array
//     for (int i = 0; i < length; i++) {
//         cout << originalArray[i] << " ";
//     }

//     return 0;
// }
