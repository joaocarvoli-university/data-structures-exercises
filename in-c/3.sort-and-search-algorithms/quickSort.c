#include <stdio.h>
#include <stdlib.h>

void quickSort(int *list, int begin, int qnt);
int partition(int *list, int begin, int end);

int main(){

    int qnt = 0;
    int x = 0;
    scanf("%d", &qnt);
    int *list; 

    list = (int *) malloc(qnt*sizeof(int));

    for(int i = 0; i < qnt; i++) scanf("%d", &list[i]);
    printf("Not ordered list: ");
    for(int i = 0; i < qnt; i++) printf("%d ", list[i]);
    printf("\nOrdered list: ");
    quickSort(list, x ,qnt);
    for(int i = 0; i < qnt; i++) printf("%d ", list[i]);
    // The wrong is relation with the variable X
    free(list);
}

void quickSort(int *list, int begin, int qnt){
    begin = 0;
    int end = qnt - 1;
    if(begin < end){
        int pivot = partition(list, begin, end);
        quickSort(list, begin, pivot - 1);
        quickSort(list, pivot + 1, end);
    }
}

int partition(int *list, int begin, int end){
    int pivot = list[end];
    int flag1 = begin;

    for(int flag2 = 0; flag2 < end; flag2++){
        if(list[flag2] <= pivot){
            int aux = flag1;
            flag1 = flag2;
            flag2 = aux;
            flag1++;
        }
    }
    int aux = list[flag1];
    list[flag1] = list[end];
    list[end] = aux;
    
    return flag1;  
}
