//Theorey part of trees from line 4 to line 51


// data structure are of two types - Linear / Non-Linear
// Linear data structures - Arrays, Linked Lists, Stacks, Queues,  Data is arranged in a sequential manner/ One after another
// Non-Linear data structures - Trees, Graphs, Data is arranged in a hierarchical manner/ Connected to one another in a complex way
//Stack follows LIFO (Last In First Out) principle
//Queue follows FIFO (First In First Out) principle

//In this we are studying trees
// tress are non-linear data structures
//A tree is a collection of nodes connected by edges
//The topmost node is called the root node
//Each node contains a value and a list of references to other nodes (its children)
//Trees can be defined as a collection of entites (nodes) linked together to simulate a hierechy

//ancestor :- any predecessor node on the path from root to that node
//decendant :- any successor node on the path from that node to leaf node
//leaf node :- node with no children
//sibling nodes :- nodes with same parent
//degree of node :- number of children of a node
//degree of tree :- maximum degree of all nodes in the tree
//depth of node :- number of edges from root to that node
//height of tree :- maximum depth of any node in the tree
//height of node :- number of edges on the longest path from that node to a leaf node
//level of node :- number of edges from root to that node (root is at level 0)
//level of node = level of depth of node
//path :- sequence of nodes and edges connecting a node with a descendant
//level of tree = height of the tress

//binary tree :- each node can have atmost 2 children
//Tree consists of left and right |(left)|A|(right)|

// struct node
// {
//     int data;
//     struct node * left;
//     struct node * right;
// };

// maximum number of nodes possbile at level 'i' of binary tree is 2^i
// maximum number of nodes in a binary tree of height 'h' is 2^(h+1) - 1

//types of binary trees :-
//1. Full binary tree :- each node has either 0 or 2 children
//2. Complete binary tree :- all levels are completely filled except possibly the last level and the last level has all keys as left as possible
//3. Perfect binary tree :- all internal nodes have 2 children and all leaf nodes are
// at the same level
//4. Degenerate (or pathological) tree :- each parent node has only one child. Such trees are
// basically linked lists

//DOESN'T WORK 

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node * left;
//     struct node * right;
// };
// struct node *  create()
// {
//     struct node * newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     int x;
//     printf("Enter data");
//     scanf("%d",&x);
//     if(x == -1)
//     {
//         return 0;
//     }
//     else
//     {
//         newnode -> data = x;
//         printf("Enter left child of %d\n",x);
//         newnode -> left = create();
//         printf("Enter right child of %d\n",x);
//         newnode -> right = create();
//         return newnode;    
//     }
// }

// int main()
// {
//     struct node *root;
//     root = 0;
//     root = create ();

// }

//FIXED PROGRAM

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node* create() {
//     int x;
//     struct node *newnode;
    
//     printf("Enter data (-1 for no node): ");
//     scanf("%d", &x);

//     if(x == -1)
//         return NULL;

//     newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = x;

//     printf("Enter left child of %d:\n", x);
//     newnode->left = create();

//     printf("Enter right child of %d:\n", x);
//     newnode->right = create();

//     return newnode;
// }

// int main() {
//     struct node *root = NULL;
//     root = create();
//     return 0;
// }


//Array representation of binary tree (sequential represetion)

//Two cases :- Case 1 - Index starts from 0
//             Case 2 - Index starts from 1
// if a node is at index 'i'
// then its left child is at index '2i + 1' (case 1)
// and right child is at index '2i + 2' (case 1)
// if a node is at index 'i'
// then its left child is at index '2i' (case 2)
// and right child is at index '2i + 1' (case 2)
// its parent is at index '(i-1)/2' (case 1)
// its parent is at index 'i/2' (case 2)