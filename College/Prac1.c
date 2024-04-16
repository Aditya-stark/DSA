#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];
    printf("Enter A String\n");
    fgets(string1, sizeof(string1), stdin);

    int length = strlen(string1);
    printf("Length of String: %d\n", length - 1);

    strcpy(string2, string1);
    printf("Copied string: %s\n", string2);

    char string3[200];
    printf("Enter another string: \n");
    fgets(string3, sizeof(string3), stdin);

    // int comparison = strcmp(string1, string3);
    int size1 = strlen(string1);
    int size3 = strlen(string3);

    if (size1 == size3)
    {
        printf("String are equal\n");
    }
    else if (size1 < size3)
    {
        printf("First String is smaller\n");
    }
    else
    {
        printf("First String is Larger\n");
    }

    if (strlen(string1) + strlen(string3) < sizeof(string1))
    {
        strcat(string1, string3);
        printf("Concatenated String = %s\n", string1);
    }
    else
    {
        printf("Cannot concatenate, the result will exceed the buffer size.\n");
    }

    return 0;
}