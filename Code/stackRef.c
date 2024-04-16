#include<stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push();
void pop();
void peep();
void change();
void display();

int main() {
    int choice;
    char ans;
    do {
        printf("\n-----------------------------");
        printf("\nSTACK IMPLEMENTATION PROGRAM\n");
        printf("-----------------------------");
        printf("\n 1. Push\n 2. Pop\n 3. Display\n 4. Peep\n 5. Change\n 6. Exit\n");
        printf("-----------------------------\n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break;
            case 5:
                change();
                break;
            case 6:
                return 0;
            default:
                printf("\nInvalid choice. Try again.");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ans);
    } while(ans == 'y' || ans == 'Y');
    return 0;
}

void push() {
    int item;
    if(top >= MAX-1) {
        printf("\nStack overflow. Cannot push more elements.\n");
    } else {
        printf("\nEnter the element to push: ");
        scanf("%d", &item);
        stack[++top] = item;
        printf("\nElement pushed successfully.\n");
    }
}

void pop() {
    if(top < 0) {
        printf("\nStack underflow. Cannot pop more elements.\n");
    } else {
        printf("\nElement popped: %d\n", stack[top--]);
    }
}

void display() {
    if(top < 0) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements:\n");
        for(int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peep() {
    if(top < 0) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nTop element: %d\n", stack[top]);
    }
}

void change() {
    int row, new_element;
    if(top < 0) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nEnter the row to change: ");
        scanf("%d", &row);
        if(row > top) {
            printf("\nInvalid row. Try again.\n");
        } else {
            printf("\nEnter the new element: ");
            scanf("%d", &new_element);
            stack[row] = new_element;
            printf("\nElement changed successfully.\n");
        }
    }
}