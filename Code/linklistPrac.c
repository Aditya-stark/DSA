#include <stdio.h>
#include <stdlib.h>

// Declaring A Node structure
struct Node
{
    int value;
    struct Node *next;
};

// Printing Linklist Element
void PrintingElement(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->value);
        ptr = ptr->next;
    }
}


int main()
{
    // Creating Nodes
    struct Node *head = NULL;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    // Memory Allocation to nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Asigning Values to nodes
    head->value = 1;
    first->value = 2;
    second->value = 3;
    third->value = 4;

    // connecting nodes
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    PrintingElement(head);

    return 0;
}
