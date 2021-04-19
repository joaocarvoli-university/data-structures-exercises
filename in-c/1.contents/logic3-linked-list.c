#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    struct node *next;
};

void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf(" %d ", temp -> data);
        temp = temp -> next;
    }
}

void addEnd(Node **head, int val){
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(*head == NULL){
        *head = newNode;
    }else{
        Node *last = *head; // The last node receive head NODE and searches for the last node (that points to NULL)

        while(last -> next != NULL){
            last = last -> next;
        }
        last -> next = newNode; 

    }
}

int main(){
    Node *head = NULL;
    int num = 0, stop = -1;
    
    while(1){ // This loop receive values while You don't put a number (-1).
        scanf("%d", &num);
        if(num == stop) break;
        else addEnd(&head, num);
    }

    printList(head);
}