#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string3[100];
    printf("Enter A String: ");
    fgets(string1, sizeof(string1), stdin);

    int length = strlen(string1);
    printf("Length of string: %d\n", length - 1); // Subtract 1 to exclude the newline character

    char string2[100];
    strcpy(string2, string1);
    printf("Copied string: %s\n", string2);

    printf("Enter Another String: ");
    fgets(string2, sizeof(string2), stdin);

    int comparison = strcmp(string1, string2);
    if (comparison == 0)
    {
        printf("Strings are equal\n");
    }
    else if (comparison < 0)
    {
        printf("First String is Smaller\n");
    }
    else
    {
        printf("First String is Larger\n");
    }

    // Check if the destination buffer has enough space for both strings
    if (strlen(string1) + strlen(string2) < sizeof(string1))
    {
        strcat(string1, string2);
        printf("Concatenated String: %s\n", string1);
    }
    else
    {
        printf("Cannot concatenate, the result will exceed the buffer size.\n");
    }
    return 0;
}