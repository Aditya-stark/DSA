#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0, n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}