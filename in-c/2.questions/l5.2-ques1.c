#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int key; 
    struct node *left;
    struct node *right; 
};

Node *GetNewNode(int val)
{ 
    // This functions will be add a new value in tree, each new Node has a three fields
    Node *newNode = malloc(sizeof(Node));
    newNode -> key = val;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

Node *Insert(Node *root, int val)
{

    if(root == NULL) return GetNewNode(val);
    if(root -> key < val) root -> right = Insert(root -> right, val);
    else if(root -> key > val) root -> left = Insert(root -> left, val);

    return root;
}

int CountSubNode(Node* root){
    if(root == NULL) return 1;
    if(root -> right == NULL && root -> left == NULL) return 1;
    return CountSubNode(root -> right) + CountSubNode(root -> left); 
}

void Inorder(Node *root)
{
    if(root == NULL) return;
    Inorder(root -> left);
    printf(" %d", root -> key);
    Inorder(root -> right);

}



int main()
{
    Node *root = NULL;
    int num = 0, stop = -1, count = 0;
    
    while(1){
        scanf("%d", &num);
        if(num == stop) break;
        else root = Insert(root, num);
    }
    int x = CountSubNode(root);
    printf("%d", x - 1);

}