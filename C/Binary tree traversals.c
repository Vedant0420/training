//Binary tree traversals in C
//Inorder, Preorder and Postorder traversals
//Inorder : Left -> Root -> Right
//Preorder : Root -> Left -> Right
//Postorder : Left -> Right -> Root

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* create();
void preorder(struct node *root);

int main() {
    struct node *root = NULL;

    printf("Create the binary tree:\n");
    root = create();

    printf("\nPreorder is: ");
    preorder(root);

    return 0;
}

struct node* create() {
    int x;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1) {
        return 0;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;

    printf("Enter left child of %d\n", x);
    newnode->left = create();

    printf("Enter right child of %d\n", x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root) {
    if (root == 0)    //or you can use (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);

    // for inorder and postorder, just change the position of the print statement
    // norder : void inorder(struct node *root) {
    // if (root == 0)
    //     return;
    // for inorder :
    // inorder(root->left);
    // printf("%d ", root->data);
    // inorder(root->right);


    // for post order : 
    // void postorder(struct node *root) {
    // if (root == 0)
    //     return;

    // postorder(root->left);
    // postorder(root->right);
    // printf("%d ", root->data);
}
