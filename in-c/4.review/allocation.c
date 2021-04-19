#include <stdio.h>
#include <stdlib.h> // for memory allocation
// Aqui  iremos falar sobre alocação dinâmica de memória.
// Here We will talk about memory dynamic allocation.

int main(){

    // char nome[50]; BEFORE ALLOCATION
    char *nome;
    nome = (char *) malloc(sizeof(char)); // (char *) is a cast function
    // malloc returns a function void type

    scanf("%[^\n] ", nome); // to read phrases is necessary to use %[^\n]" to remove 
    // getchar(nome);
    printf("%s", nome);
}