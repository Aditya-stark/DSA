#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {5, 86, 44, 8, 26, 4};
    int n;
    printf("Enter a num\n");
    scanf("%d", &n);

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            printf("Element %d is in The Array in %d iteration", arr[i], i+1);
            break;
        }
    }

    return 0;
}
