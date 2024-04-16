#include <stdio.h>

int main()
{

    int r, c;
    printf("Size Of Parking First ROWS then COLUMN");
    scanf("%d %d", &r, &c);

    int m[r][c];

    printf("Enter the Status of Parking");
    for (int i = 0; i < (sizeof(m) / 4); i++)
    {
        for (int j = 0; j < i; j++)
        {
            scan("%d", &m[i][j]);
        }
    }
}