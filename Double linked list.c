#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prevPtr;
    struct Node* nextPtr;
};

void insertAtBeginning(struct Node** headPtr, int data) {
    struct Node* newNodePtr = (struct Node*)malloc(sizeof(struct Node));
    newNodePtr->data = data;
    newNodePtr->prevPtr = NULL;
    newNodePtr->nextPtr = *headPtr;

    if (*headPtr != NULL) {
        (*headPtr)->prevPtr = newNodePtr;
    }
    *headPtr = newNodePtr;
}

void insertAtEnd(struct Node** headPtr, int data) {
    struct Node* newNodePtr = (struct Node*)malloc(sizeof(struct Node));
    newNodePtr->data = data;
    newNodePtr->nextPtr = NULL;

    if (*headPtr == NULL) {
        newNodePtr->prevPtr = NULL;
        *headPtr = newNodePtr;
        return;
    }

    struct Node* tempPtr = *headPtr;
    while (tempPtr->nextPtr != NULL) {
        tempPtr = tempPtr->nextPtr;
    }
    tempPtr->nextPtr = newNodePtr;
    newNodePtr->prevPtr = tempPtr;
}

void displayList(struct Node* headPtr) {
    struct Node* tempPtr = headPtr;
    printf("NULL <- ");
    while (tempPtr != NULL) {
        printf("%d <-> ", tempPtr->data);
        tempPtr = tempPtr->nextPtr;
    }
    printf("NULL\n");
}

int main() {
    struct Node* headPtr = NULL;
    int choice, data;

    while (1) {
        printf("\nMenu:\n1. Insert at Beginning\n2. Insert at End\n3. Display List\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&headPtr, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&headPtr, data);
                break;
            case 3:
                printf("Doubly Linked List: ");
                displayList(headPtr);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
