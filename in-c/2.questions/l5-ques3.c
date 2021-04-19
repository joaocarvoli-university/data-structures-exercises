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
    printf(" %d", root -> key);
    Inorder(root -> right);

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
    int num = 0, stop = -1;
    
    while(1){
        scanf("%d", &num);
        if(num == stop) break;
        else root = Insert(root, num);
    }

    int key = 0;
    scanf("%d", &key);
    root = RemoveNode(root,key);
    Inorder(root);

}