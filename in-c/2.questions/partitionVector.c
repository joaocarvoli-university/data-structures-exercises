#include <stdio.h>
#include <stdlib.h>

int main(){

    int qnt = 0, index_pivot = 0;
    scanf("%d %d", &qnt, &index_pivot);
    int *vector;
    vector = (int *) malloc(qnt*sizeof(int));

    for(int i = 0; i < qnt; i++) scanf("%d", &vector[i]); // Reading Elements
    
    int smallEqual = 0, bigger = 0;
    for(int i = 0; i < qnt; i++){
        if(vector[i] < vector[index_pivot]) smallEqual++; // finding out how many elements are smaller than the pivot
        else bigger++; // finding out how many elements are bigger than the pivot
    }
    
    int *vetAux1, *vetAux2; // Creating auxiliary vectors
    
    vetAux1 = (int *) malloc(smallEqual*sizeof(int));
    vetAux2 = (int *) malloc(bigger*sizeof(int));

    (int *) malloc(qnt*sizeof(int));
    for(int i = 0, j = 0; i < qnt; i++){
        if(vector[i] < vector[index_pivot]) vetAux1[j++] = vector[i]; // Putting elements smaller than pivot
    }

    vetAux2[0] = vector[index_pivot]; // Putting the pivot element

    for(int i = 0, j = 1; i < qnt; i++){
        if(vector[i] > vector[index_pivot]) vetAux2[j++] = vector[i];//  Putting elements bigger than pivot
    }
    
    for(int i = 0; i < smallEqual; i++) printf("%d ", vetAux1[i]);
    for(int i = 0; i < bigger; i++){
        if(i < bigger - 1) printf("%d ", vetAux2[i]);
        else printf("%d", vetAux2[i]);
    }
    
    free(vector);
    free(vetAux1);
    free(vetAux2);
}
