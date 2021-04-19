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

    if(root == NULL) return GetNewNode(val); // If tree is empty

    if(root -> key < val) root -> right = Insert(root -> right, val);
    // This above function verify if actually key is less than value
    else if(root -> key > val) root -> left = Insert(root -> left, val);
    // This above function verify if actually key is larger than value

    return root;
}

void Inorder(Node *root)
{
    if(root == NULL) return;
    Inorder(root -> left);
    printf("%d ", root -> key);
    Inorder(root -> right);

}

void Preorder(Node *root)
{
    if(root == NULL) return;
    printf("%d ", root -> key);
    Preorder(root -> left); // traverse the left subtree
    Preorder(root -> right); // traverse the right subtree
}

void Postorder(Node *root)
{
    if(root == NULL) return;
    Postorder(root -> left);
    Postorder(root -> right);
    printf("%d ", root -> key);
}

int getRightMin(struct node *root)
{
    struct node *temp = root;
    while(temp->left != NULL){ temp = temp->left;}

    return temp->key;
}

Node *RemoveNode(Node *root, int val)
{
    if(root == NULL) return NULL;
    if(root -> key < val) root -> right = RemoveNode(root -> right, val);
    if(root -> key > val) root -> left = RemoveNode(root -> left, val);
    else if(root -> key < val) root -> right = RemoveNode(root -> right, val);
    else
    {
        if(root -> left == NULL && root -> right == NULL)
        {
            free(root);
            return NULL;
        }
        else if(root -> left == NULL)
        {
            Node *temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL)
        {
            Node *temp = root -> left;
            free(root);
            return temp;
        }
        else
        {
            int rightMin = getRightMin(root->right);
            root->key = rightMin;
            root->right = RemoveNode(root->right,rightMin);
        }
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = Insert(root,100);
    root = Insert(root,50);
    root = Insert(root,120);
    root = Insert(root,40);
    root = Insert(root,60);
    root = Insert(root,110);
    root = Insert(root,150);
    printf("Before remotion:\n");
    Inorder(root); // -> 40 50 60 100 110 120 150
    root = RemoveNode(root,150);
    printf("\nAfter remotion:\n");
    Inorder(root); // -> 40 50 60 100 110 120
    

    /*             Tree is bellow:

                        100 
                      /     \
                    /        \
                  /           \
                50            120
              /   \         /    \
            40    60      110     150
    */

    //Postorder(root); // -> This function will print: 40 60 50 110 150 120 100
    //Preorder(root); // This function will print: 100 50 40 60 120 110 150
    //Inorder(root); // -> This function will print: 40 50 60 100 110 120 150
    return 0;

}