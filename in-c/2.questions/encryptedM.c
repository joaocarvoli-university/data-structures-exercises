#include <stdio.h>
#include <string.h>
// The objective of this code is decrypted a message
// We will use the selection sort

void selectionSort(char vector[], int qnt){
int aux = 0;

for(int i = 1; i < qnt; i++){
    int key = vector[i];
    int j = i - 1;

    for(;j >= 0 && vector[j] > key;j--) vector[j + 1] = vector[j];
    vector[j + 1] = key;
}

}

int main(){

int qnt = 0, sizeword = 0;
scanf("%d %d", &qnt, &sizeword);
char encry_message[sizeword];
char word_true[sizeword];

scanf("%s",word_true); // First word will be the "RIGHT WORD"

for(int i = 0; i < qnt - 1; i++){
    scanf("%s", encry_message); // This words will be compare
    selectionSort(encry_message, sizeword);

    if(strcmp(encry_message,word_true) == 0) printf("sim\n"); // This function is used to compare strings
    else printf("nao\n");
}
}
