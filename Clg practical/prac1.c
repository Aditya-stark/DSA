// Write a C program to perform following operations on strings.
// a) Find length of given string
// b) Copy string
// c) Compare given strings
// d) Concatenate given strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Aditya";

    printf("\nOG String: %s\n", str1);
    // a) Length
    printf("Length of the String: ");
    printf("%d", strlen(str1));

    // b) Copy String
    printf("\nCopied String: ");
    char str1cpy[] = "";
    printf("%s", str1cpy);
    strcpy(str1cpy, str1);
    printf("%s", str1cpy);

    // c) Compare string
    printf("\nCompare String: ");
    if (strcmp(str1, str1cpy))
    {
        printf("Diffrent");
    }
    else
    {
        printf("Same");
    }

    // d) Concatnate
    char string1[20] = "Aditya";
    char string2[20] = " Sharma";
    strcat(string1, string2);

    printf("\n%s", string1);

    return 0;
}