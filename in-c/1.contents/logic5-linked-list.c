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

void deleteNode(Node **head, int key){
    Node *temp; // This variable will be used to freeing the memory

    if((*head) -> data == key){ // If head NODE is the first node
        temp = *head;  // mode head NODE to the next
        *head = (*head) -> next;
        free(temp);
    } else{
        Node *current = *head;
        while(current -> next != NULL){
            if(current -> next -> data == key){ // Current that points to next in field data...
                temp = current -> next;
                // This node will be disconnected from list when
                current -> next = current -> next -> next;
                free(temp);
            } else current = current -> next;
        }
    }
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

    printf("Whats is the number that You wanna delete?\n");
    int key = 0;
    scanf("%d: ",&key);

    deleteNode(&head, key);
    printf("The list after some node has been deleted:\n");
    printList(head);

    if(head == NULL) printf("vazia");
}