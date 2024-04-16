#include <stdio.h>

int main()
{

    int arr[] = {56, 29, 65, 96, 56, 49, 69, 45, 34, 57, 48, 75, 69, 23, 62, 65, 95, 62, 93, 56, 26, 59, 65, 62, 39, 56, 92};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}