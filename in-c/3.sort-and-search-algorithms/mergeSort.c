#include <stdio.h>
#include <stdlib.h>



int main(){

    int qnt = 0;
    int x = 0;
    scanf("%d", &qnt);
    int *list; 

    list = (int *) malloc(qnt*sizeof(int));

    for(int i = 0; i < qnt; i++) scanf("%d", &list[i]);
    quickSort(list, x ,qnt);
    for(int i = 0; i < qnt; i++) printf("%d ", list[i]);
    free(list);

    // This code isn't finished
}































