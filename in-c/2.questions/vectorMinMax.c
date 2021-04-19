#include <stdio.h>
#include <stdlib.h>


void VectorMaxMin(int *vector, int qnt, int* smaller, int* bigger);

int main(){

    int qnt = 0;
    scanf("%d", &qnt);
    int *vector;
    int smaller = 0, bigger = 0;

    vector = (int *) malloc(qnt*sizeof(int)); // aplying allocation function
    
    for (int i = 0; i < qnt; i++) scanf("%d", &vector[i]);
    VectorMaxMin(vector, qnt, &smaller, &bigger);
    printf("%d\n%d", smaller, bigger);

    free(vector); // deallocating memory
}

void VectorMaxMin(int* vector, int qnt, int* smaller, int* bigger){ //a function that to seek the smaller and bigger element of the array
    for(int i = 0; i < qnt; i++){
        if(i == 0){
            *bigger = vector[i];
            *smaller = vector[i];
        }
        if(vector[i] > *bigger) *bigger = vector[i];
        if(vector[i] < *smaller) *smaller = vector[i];
    }
}