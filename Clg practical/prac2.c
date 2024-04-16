// perform following programs using array.
// a) Search element in array.
// b) Sort given array.
// c) Reverse elements of array.
// d) Addition of elements of array.
// e) Find largest element from given array.
// f) Find smallest element from given array.

#include <stdio.h>

void searchEle(int arr[])
{
    int ele;
    printf("Enter a number: ");
    scanf("%d", &ele);
    int flag = 0;
    int i;
    for (i = 0; i < 7; i++)
    {
        if (arr[i] == ele)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Element %d found at index %d", ele, i);
    }
    else
    {

        printf("Element is not present");
    }
}

void sortArr(int arr[])
{
    int i, j;

    for (i = 0; i < sizeof(arr) / 4; i++)
    {
        for (j = i + 1; j < sizeof(arr) / 4; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < sizeof(arr) / 4; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void reverseArr(int arr[], int size)
{
    int start, end;

    start = 0;
    end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void addArr(int arr[], int size)
{
    int sum = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Sum = %d", sum);
}

void largestEle(int arr[], int size)
{
    int largestNo = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largestNo)
        {
            largestNo = arr[i];
        }
    }

    printf("Largest: %d", largestNo);
}

void smallestEle(int arr[], int size)
{
    int smallestNo = arr[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] < smallestNo)
        {
            smallestNo = arr[i];
        }
    }

    printf("Smallest: %d", smallestNo);
}

void main()
{

    int arr[] = {64, 9, 6, 41, 71, 7, 40, 80};
    int c;
    int size = sizeof(arr) / 4;

    printf("Select a Option\n");
    printf("1) Search element in array.\n2) Sort given array.\n3) Reverse elements of array.\n4) Addition of elements of array.\n5) Find largest element from given array.\n6) Find smallest element from given array.\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        searchEle(arr);
        break;

    case 2:
        sortArr(arr);
        break;

    case 3:
        reverseArr(arr, size);
        break;

    case 4:
        addArr(arr, size);
        break;

    case 5:
        largestEle(arr, size);
        break;

    case 6:
        smallestEle(arr, size);
        break;

    default:
        break;
    }
}