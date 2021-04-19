#include <stdio.h>
#include <stdlib.h>

 /*In the BST we have a root and it is the bigger element at the tree
 The other elements are called leaf nodes and they are on the base of the tree
 The nodes that are in middle are called internal nodes
 The elements left to root are smaller than the root and right elements are bigger*/

typedef struct node Node;

struct node{
    int key; 
    struct node *left; // Reference to the left node, memory address of left child
    struct node *right; // Reference to the right node, memory address of right child
};

// Creating a simple BST node:

int main(){

Node *root;
root = malloc(sizeof(Node));

root -> key = 10;
root -> left = NULL;
root -> right = NULL;
}




