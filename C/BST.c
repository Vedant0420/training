#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* createNode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = 0;
    newnode->right = 0;
    return newnode;
}

// Insert into BST
struct node* insert(struct node* root, int value) {
    if (root == 0) {                 // empty tree
        root = createNode(value);
        return root;
    }

    if (value < root->data) {        // go left
        root->left = insert(root->left, value);
    }
    else {                           // go right
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal (L N R)
void inorder(struct node* root) {
    if (root == 0)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct node* root = 0;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder traversal (sorted): ");
    inorder(root);

    return 0;
}
