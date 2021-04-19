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
        Node *last = *head;
        while(last -> next != NULL) last = last -> next;
        last -> next = newNode; 
    }
}

int searchNode(Node *head, int key){
    Node *temp = head;

    while(temp != NULL){
        if(temp -> data == key) return 1; // If this key was found, returns 1
        temp = temp -> next;
    }
    return -1; // If the key wasn't found, returns -1
}

int main(){
    Node *head = NULL;
    int num = 0, stop = -1;
    
    printf("What numbers do You wanna put on the list?\n");
    while(1){ // This loop receive values while You don't put a number (-1).
        scanf("%d", &num);
        if(num == stop) break;
        else addEnd(&head, num);
    }

    printf("Whats is the number that You're searchers for?\n");
    int key = 0;
    scanf("%d: ",&key);

    if(searchNode(head, key) == 1) printf("Number found!");
    else printf("Number not found!");
}