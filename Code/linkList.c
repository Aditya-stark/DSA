// #include <stdio.h>
// #include <stdlib.h>

// // Node
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// // Function to Create a New Node
// struct Node *createNode(int data)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert data at the end of the list
// void insertAtEnd(struct Node **head, int data)
// {
//     struct Node *newNode = createNode(data);
//     if (*head == NULL)
//     {
//         *head = newNode;
//     }
//     else
//     {
//         struct Node *current = *head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//         newNode->next = NULL;
//     }
// }

// // Function to print the elements of the list
// void printList(struct Node *head)
// {
//     struct Node *current = head;
//     while (current != NULL)
//     {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     struct Node *head = NULL;

//     // Insert elements into the linked list
//     insertAtEnd(&head, 1);
//     insertAtEnd(&head, 2);
//     insertAtEnd(&head, 3);
//     insertAtEnd(&head, 4);

//     // Print the linked list
//     printf("Linked List: ");
//     printList(head);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

// Function to insert data at end of the list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = NULL;
    }
}

// printing List
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf(" NULL");
}

int main()
{
    struct Node *head = NULL;

    insertAtEnd(&head, 0);
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}
