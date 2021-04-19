#include <stdio.h>
#include <stdlib.h>

// In this program I'll make a product of matrices
// changing

int main(){

    int size = 0; // + 1
    scanf("%d", &size);
    int ** matrixA;
    int ** matrixB;
    int ** matrixC;
    
    
    matrixA = (int **) malloc(size*sizeof(int*));
    for(int i = 0; i < size; i++){ 
    matrixA[i] = (int *) malloc(size*sizeof(int)); 
        for(int j = 0; j < size; j++) scanf("%d", &matrixA[i][j]); 
    }



    matrixB = (int **) malloc(size*sizeof(int*));// + 1
    matrixC = (int **) malloc(size*sizeof(int*));  // + 1
    for(int i = 0; i < size; i++){ // (n + 1) + n
    matrixB[i] = (int *) malloc(size*sizeof(int)); // + 1
    matrixC[i] = (int *) malloc(size*sizeof(int)); // + 1
        for(int j = 0; j < size; j++){ // (n + 1) + n
            scanf("%d", &matrixB[i][j]); 
            matrixC[i][j] = 0; // + 1
        }
    }

   //  2 +  (n + 1) + n(2 + (n + 1) + n(1))


    for(int i = 0; i < size; i++){ // (n + 1) + n
        for(int j = 0; j < size; j++){ // (n + 1) + n
            for(int u = 0; u < size; u++){ // (n + 1) + n
                matrixC[i][j] += matrixA[i][u]*matrixB[u][j]; // + 1
            }
        }
    }
// (n + 1) + n((n + 1) + n(n + 1) + n(1))

    for(int i = 0; i < size; i++){ // 
        for(int j = 0; j < size; j++) printf("%d ",matrixC[i][j]);
        printf("\n");
    }
    
    for(int i = 0; i < size; i++){ // 
        free(matrixA[i]);
        free(matrixB[i]);
        free(matrixC[i]);
    }
    

    free(matrixA); 
    free(matrixB);
    free(matrixC);
}