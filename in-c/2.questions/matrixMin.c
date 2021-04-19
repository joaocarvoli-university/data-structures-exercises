#include <stdio.h>
#include <stdlib.h>

int main(){

    int line = 0, column = 0;
    scanf("%d %d", &line, &column);
    int ** matrixA; // pointer to pointer (It is made because We're working with matrices)

    matrixA = (int **) malloc(sizeof(int*)*line);
    for(int i = 0; i < line; i++){
        matrixA[i] = (int *) malloc(sizeof(int)*column);
        for(int j = 0; j < column; j++) scanf("%d", &matrixA[i][j]);
    }
    // This program seeks a bigger number in the matrix and after it, it seeks the smaller number using the line position to seeks in the vector
    int C = 0, L = 0, bigger = matrixA[0][0];
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            if(matrixA[i][j] > bigger){
                bigger = matrixA[i][j];
                L = i;
            }
        }
    }
    int numSmaller = matrixA[L][0];
    // Searching the smaller element in the vector
    for(int i = 0; i < column; i++){
        if(matrixA[L][i] < numSmaller) numSmaller = matrixA[L][i];
    }
    printf("%d", numSmaller);
    
    for(int i = 0; i < line; i++) free(matrixA[i]); // Realeasing each vector at matrix
    free(matrixA); // Realeasing entire matrix
}
