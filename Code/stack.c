// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int top;
//     int *arr;
// };

// // Is will Check if the stack is empty or not
// int isEmpty(struct stack *ptr)
// {

//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// // Is will Check id the stack is Full or not
// int isFull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     // Here we have created a stack obj as *s
//     //  s->size means s* point to size member
//     struct stack *s1;
//     s1->size = 6;
//     s1->top = -1;
//     s1->arr = (int *)malloc(s1->size * sizeof(int));
//     // above we are dynamically alocating memory to the stack array

//     // pushing an element into stack

//     s1->arr[0] = 50;
//     s1->top++;

//     // printf("Size = %d", s1->size - 1);
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("Enter the Element for index %d", i);
//     //     scanf("%d", &s1->arr[i]);
//     // }

//     // Checking if stack is empty or not
//     if (isEmpty(s1))
//     {
//         printf("Stack is Empty:)");
//     }
//     else
//     {
//         printf("Stack is Not Empty");
//     }

//     if (isFull(s1))
//     {
//         printf("\nStack is Full");
//     }
//     else
//     {
//         printf("\nStack is Not full");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

// Blueprint of stack
struct stack
{
    int data[MAX_SIZE];
    int top;
};

// Initializing stack
void initialize(struct stack *s1)
{
    s1->top = -1;
}

// IsEmpty to check if the stack is empty or not
int IsEmpty(struct stack *s1)
{
    if (s1->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// PUSH Function to push data into stack
void push(struct stack *s1, int data)
{
    if (s1->top == MAX_SIZE - 1)
    {
        printf("Stack is Full. Cannot push %d data", data);
    }
    else
    {
        s1->data[++(s1->top)] = data;
    }
}

// PEEP Function to check top data from a stack without removing it
int peek(struct stack *s1)
{
    if (s1->top == -1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        return s1->data[s1->top];
    }
}

// POP Function to pop data from the stack
int pop(struct stack *s1)
{
    if (IsEmpty(s1))
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        return s1->data[(s1->top)--];
    }
}

int main()
{
    struct stack s1;

    initialize(&s1);

    // Pushing data
    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);

    // Peek top data
    printf("Top element of stack = %d\n", peek(&s1));

    // Pop the top element
    printf("Popped %d\n", pop(&s1));

    printf("Top element of stack = %d\n", peek(&s1));
    printf("Popped %d\n", pop(&s1));

    printf("Top element of stack = %d\n", peek(&s1));
    printf("Popped %d\n", pop(&s1));

    printf("Popped %d\n", pop(&s1));
    return 0;
}
