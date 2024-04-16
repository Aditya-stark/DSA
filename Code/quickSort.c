// // #include <stdio.h>

// // void swap(int arr[], int i, int j)
// // {

// //     int temp = arr[i];
// //     arr[i] = arr[j];
// //     arr[j] = temp;
// // }

// // int partition(int arr[], int l, int u)
// // {
// //     int pivot = arr[u];
// //     int i = l - 1;

// //     for (int j = l; j < u; j++)
// //     {
// //         if (arr[j] < pivot)
// //         {
// //             i++;
// //             swap(arr, i, j);
// //         }
// //     }
// //     swap(arr, i + 1, u);
// //     return i + 1;
// // }

// // void quickSort(int arr[], int l, int u)
// // {
// //     if (l < u)
// //     {
// //         int pivotIndex = partition(arr, l, u);
// //         quickSort(arr, l, pivotIndex - 1);
// //         quickSort(arr, pivotIndex + 1, u);
// //     }
// // }

// // int main()
// // {

// //     int arr[] = {5, 4, 3, 2, 1};
// //     int size = sizeof(arr) / 4;

// //     quickSort(arr, 0, size);

// //     for (int i = 0; i < size; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }

// //     return 0;
// // }
// #include <stdio.h>

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int u)
// {

//     int pivot = arr[u];
//     int i = l - 1;

//     for (int j = l; j < u; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, u);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int u)
// {
//     if (l < u)
//     {
//         int pivotIndex = partition(arr, l, u);

//         quickSort(arr, l, pivotIndex - 1);
//         quickSort(arr, pivotIndex + 1, u);
//     }
// }

// int main()
// {

//     int arr[] = {4, 8, 9, 1, 49, 86, 40};
//     int size = sizeof(arr)/ sizeof(arr[0]);

//     quickSort(arr, 0, size-1);

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int u)
{
    int pivot = arr[u];
    int i = l - 1;
    for (int j = l; j < u; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, u);
    return i + 1;
}

void quickSort(int arr[], int l, int u)
{
    if (l < u)
    {
        int pivotIndex = partition(arr, l, u);

        quickSort(arr, l, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, u);
    }
}

int main()
{

    int arr[] = {98, 8, 52, 5, 32, 56, 35, 68, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}