#include <stdio.h>

int main()
{

    int arr[] = {49, 40, 7, 47, 4};

    int pos = 2;

    for (int i = pos; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}