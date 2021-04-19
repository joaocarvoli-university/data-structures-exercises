#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *list, int qnt);


int main(){

    int qnt = 0;
    int x = 0;
    scanf("%d", &qnt);
    int *list; 

    list = (int *) malloc(qnt*sizeof(int));

    for(int i = 0; i < qnt; i++) scanf("%d", &list[i]);
    printf("Not ordered list: ");
    for(int i = 0; i < qnt; i++) printf("%d ", list[i]);
    bubbleSort(list, qnt);
    printf("\nOrdered list: ");
    for(int i = 0; i < qnt; i++) printf("%d ", list[i]);
    free(list);
}


void bubbleSort(int *list, int qnt){
    for(int i = 0; i < qnt - 1; i++){
        for(int j = 0; j < qnt - 1; j++){
            if(list[j] > list[j + 1]){
                int aux = list[j];
                list[j] = list[j + 1];
                list[j + 1] = aux;
            }
        }
    }
}