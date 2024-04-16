// // Write a program to convert an infix arithmetic expression into postfix notation.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int isOperator(char ch)
// {
//     if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int getPrecedence(char ch)
// {
//     if (ch == '+' || ch == '-')
//         return 1;
//     else if (ch == '*' || ch == '/')
//         return 2;
//     else
//         return 0;
// }

// void infixToPostfix(char *infix, char *postfix)
// {
//     int i, j;
//     char stack[100];
//     int top = -1;

//     for (i = 0, j = 0; infix[i] != '\0'; i++)
//     {
//         if (!isOperator(infix[i]))
//         {
//             postfix[j] = infix[i];
//             j++;
//         }
//         else
//         {
//             while (top >= 0 && getPrecedence(stack[top]) >= getPrecedence(infix[i]))
//             {
//                 postfix[j] = stack[top];
//                 j++;
//                 top--;
//             }
//             top++;
//             stack[top] = infix[i];
//         }
//     }

//     while (top >= 0)
//     {
//         postfix[j] = stack[top];
//         j++;
//         top--;
//     }
//     postfix[j] = '\0';
// }

// int main()
// {
//     char infix[] = "5+2*3/6^10+2";
//     char postfix[100];

//     infixToPostfix(infix, postfix);
//     printf("%s\n", postfix);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void push(int symbol, char stack)
{
    
}

void inToPost(char *infix, char *postfix, char *stack)
{
    int i, j = 0;
    int symbol, next;

    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];

        switch (symbol)
        {
        case '(':
            push(symbol, stack);
            break;

        default:
            break;
        }
    }
}

int main()
{

    char infix[MAX];
    char postfix[MAX];
    char stack[100];
    int top = -1;

    inToPost(infix, postfix, stack);

    return 0;
}