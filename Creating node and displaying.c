#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *temp, *newnode;

int main() {
    int ch = 1;

    while (ch) {
        newnode = (struct node*) malloc(sizeof(struct node));
        
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? Press 1 for Yes, 0 for No: ");
        scanf("%d", &ch);
    }

    printf("The data elements are:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
