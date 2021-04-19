#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node
{
    int data;
    struct node *next;
};

void addFirst(Node **head, int val)
{
    // creating a new node
    Node *newNode = malloc(sizeof(Node)); //allocating a new node
    newNode -> data = val;                  // putting val in data
    newNode -> next = *head;                // putting field NEXT to point head NODE
    *head = newNode;                      // Now, the newNode is the head node
}

void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf(" %d ", temp -> data);
        temp = temp -> next;
    }
}

int main()
{
    Node *head = NULL; // The head node points to Null
    int num = 0, stop = -1;
    
    while(1){ // This loop receive values while You don't put a number (-1).
        scanf("%d", &num);
        if(num == stop) break;
        else addFirst(&head, num);
    }

    printList(head);
}


