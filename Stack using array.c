#include <stdio.h>
#define MAX 5

void PUSH();
void POP();
void DISPLAY();

int top = -1;
int stack[MAX];

int main() {
    int choice;

    while (1) {
        printf("Input 1 for PUSH, 2 for POP, 3 for DISPLAY, 4 to EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                PUSH();
                break;
            case 2:
                POP();
                break;
            case 3:
                DISPLAY();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong option\n");
        }
    }

    return 0;
}

void PUSH() {
    int data;

    if (top == MAX - 1) {
        printf("Stack is full\n");
    } else {
        printf("Enter your data: ");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}

void POP() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Data deleted is %d\n", stack[top]);
        top--;
    }
}

void DISPLAY() {
    if (top == -1) {
        printf("No elements to display\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
