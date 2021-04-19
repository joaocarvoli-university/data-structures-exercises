#include <stdio.h>
// In this program we will apply the Selection Sort Algorithm

void selectionSort(int vector[], int qnt){
int aux = 0;

for(int i = 1; i < qnt; i++){
    int key = vector[i];
    int j = i - 1;

    for(;j >= 0 && vector[j] > key;j--) vector[j + 1] = vector[j];
    vector[j + 1] = key;
}
// The algorithm was finished
}

int main(){

int qnt = 0;
scanf("%d", &qnt);
int vector[qnt];

for(int i = 0; i < qnt; i++) scanf("%d", &vector[i]);

selectionSort(vector, qnt);

for(int i = 0; i < qnt; i++) printf("%d ", vector[i]); // Show the code already sorted

}