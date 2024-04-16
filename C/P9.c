// // Write program to sort a given list using Selection sort.

// #include <stdio.h>

// void selectionSort(int arr[], int n) {
//     int i, j, min_idx;

//     for (i = 0; i < n - 1; i++) {
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }
// y
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{

    int arr[] = {64, 12, 55, 77, 100};
    int size = sizeof(arr) / 4;
    int i, j, min;

    // Section sort
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // PRINTING ARRAY
    for (i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}