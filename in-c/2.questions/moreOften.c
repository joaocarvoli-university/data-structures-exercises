#include <stdio.h>
// This question asked us to apply the classification by selection and show the most repeated element.
// If there are or there is any that repeat the same number of times, choose the number with the highest value

void selectionSort(int v[], int n){ // Aplying Selection algorithm
    int small = 0, swap = 0;
    
    for(int i = 0; i < n - 1; i++){
        small = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] < v[small]) small = j;
        }
        if(i != small){
            swap = v[i];
            v[i] = v[small];
            v[small] = swap;
        }
    }
}

int main(){

    int qnt = 0;
    scanf("%d", &qnt);
    int numbers[qnt];
    for(int i=0; i<qnt; i++) scanf("%d", &numbers[i]);

    selectionSort(numbers, qnt);

    for(int i = 0; i < qnt; i++) printf("%d ", numbers[i]);

    // Starting code second part. After Ordination

    int flag = 0, bigger = 0;
    for(int i = 0; i < qnt; i++){
        int acum = 0;

        for(int j = 0; j < qnt; j++){
            if(numbers[i] == numbers[j]) acum++;
        }
        if(acum >= flag){
            flag = acum;
            bigger = numbers[i];
        }
    }
    printf("\n %d", bigger);
}