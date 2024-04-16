#include <stdio.h>

void shellSort(int arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}


int main()
{

    int arr[] = {46, 96, 9, 8, 5, 63, 65};
    int size = sizeof(arr) sizeof(arr[0]);

    shellSort(arr, size);

    return 0;
}