#include <stdio.h>

int main(){


// PART 1:

    int num = 5;
    int *pnt;
    pnt = &num;

    // O %p tem que ser usado para printar endereços de memória
    // The %p needs to used to show a memory address

    printf("%p \n", pnt); // endereço que pnt aponta - memory address that pnt points
    printf("%p \n", &num); // endereço da variável num - memory address of variable num
    printf("%d \n", *pnt); // valor armazenado na variável que o ponteiro aponta - value stored in variable that pointer points
    printf("%d \n", num); // valor armazenado em num - value stored in variable num

    *pnt = 6; // mudando o valor na variável num - changing the value in variable num
    printf("Changing the value to: %x\n",num);

// PART 2: 
printf("\n PART 2 \n");
    int *pnt2;
    int vector[10];

    pnt2 = vector; // recebe o endereço do primeiro elemento do vetor - receives the memory address from the first element of the vector
    printf("%p\n", pnt2);
    
    *(pnt2++);
    printf("%p\n", pnt2);

    vector[0] = 2;
    pnt2 = vector; // Eu tive que chamar novamente - I had to call again
    printf("%d\n", vector[0]);
    *pnt2 = 10;
    printf("%d\n", vector[0]);
}
