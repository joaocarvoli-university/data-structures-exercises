#include <stdio.h>
#include <stdlib.h>
/*A linked list is a list of nodes
Each node has tow parts: 
- 1. Data 
- 2. Reference to the next node 

*/

typedef struct node Node;
struct node
{
    int data; // This variable is used to stored a data
    struct node *next; // This variable to refer to the next node (adress)
};


int main(){

// Allocating memory for each node

Node *head, *middle, *last; 

head = malloc(sizeof(Node));
middle = malloc(sizeof(Node));
last = malloc(sizeof(Node));

// How We can put values?

head -> data = 10; // In struct field DATA put...
middle -> data = 20;
last -> data = 30;

// Linking each node

head -> next = middle;
middle -> next = last;
last -> next = NULL;

// How we can print this list?

Node *temp = head;
while(temp != NULL){
    printf("%d ", temp -> data);
    temp = temp -> next;
}
}




