#include <stdio.h>
#include <stdlib.h>

// Define structure for node
typedef struct node {
    int data;
    struct node *left, *right;
} node;

// Function to create a node
node* create() {
    node *n;
    int x;

    n = (node *) malloc(sizeof(node));

    printf("Enter the data into node (-1 for no data): ");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    n->data = x;

    printf("Enter the left child of %d\n", x);
    n->left = create();

    printf("Enter the right child of %d\n", x);
    n->right = create();

    return n;
}

// Inorder traversal: Left, Root, Right
void inorder(node *n) {
    if (n != NULL) {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}

// Preorder traversal: Root, Left, Right
void preorder(node *n) {
    if (n != NULL) {
        printf("%d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

// Postorder traversal: Left, Right, Root
void postorder(node *n) {
    if (n != NULL) {
        postorder(n->left);
        postorder(n->right);
        printf("%d ", n->data);
    }
}

int main() {
    node *n;

    n = create();  // Create the tree

    printf("\nThe inorder traversal of the tree is: ");
    inorder(n);  // Perform inorder traversal
    printf("\n");

    printf("\nThe preorder traversal of the tree is: ");
    preorder(n);  // Perform preorder traversal
    printf("\n");

    printf("\nThe postorder traversal of the tree is: ");
    postorder(n);  // Perform postorder traversal
    printf("\n");

    return 0;
}
