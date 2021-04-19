#include <stdio.h>
// Well, in this program let's go to learn how we can use, Selection Sort.

void selectionSort(int v[], int n){
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
// This algorithm is able to search the smallest number in the vector and swap it in case there is another small.

int main(){

    int qnt = 0;
    scanf("%d", &qnt);
    int numbers[qnt];
    for(int i=0; i<qnt; i++) scanf("%d", &numbers[i]);

    selectionSort(numbers, qnt); // Calling the selection function

    for(int i = 0; i < qnt; i++) printf("%d ", numbers[i]);
}