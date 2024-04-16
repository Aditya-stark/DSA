#include <stdio.h>

int main()
{

    int arr[] = {6, 4, 96, 29, 3, 65, 23, 69, 5, 98, 65};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int min = arr[i];

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                int temp = arr[j];
                arr[j] = min;
                min = temp;
            }
        }
        arr[i] = min;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}