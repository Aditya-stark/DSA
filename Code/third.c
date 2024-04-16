#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5][5] = {{1, 2, 3, 11, 55}, {4, 5, 6, 12, 66}, {7, 8, 9, 13, 77}, {10, 11, 12, 14, 88}, {13, 14, 16, 24, 99}};

    int it = 0;

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d ", arr[r][c]);
            it++;
        }

        printf("\n");
    }

    printf("And the iteration = %d", it);

    return 0;
}
