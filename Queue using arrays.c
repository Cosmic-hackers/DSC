#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void enqueue();
void dequeue();
void display();

int queue[MAX];
int rear = -1;
int front = -1;

int main() {
    int choice;

    while (1) {
        printf("Enter 1 for enqueue(), 2 for dequeue(), 3 for display(), 4 for exit: ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}

void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("Queue is full\n");
    } else {
        printf("Enter a value: ");
        scanf("%d", &value);
        rear++;
        queue[rear] = value;
        if (front == -1) {
            front = 0;
        }
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted data is %d\n", queue[front]);
        front++;
        if (front > rear) {  // Reset queue when all elements are dequeued
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
