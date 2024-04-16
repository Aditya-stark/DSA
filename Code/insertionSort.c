// #include <stdio.h>

// int main()
// {

//     int arr[] = {76, 1, 7, 41, 46, 19, 8, 64};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = i; i < size; i++)
//     {
//         int current = arr[i];
//         int j = i - 1;

//         while (arr[j] > current && j >= 0)
//         {
//             arr[j + 1] arr[j];
//             j--;
//         }

//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int arr[] = {20, 9, 66, 65, 86, 58, 7, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
