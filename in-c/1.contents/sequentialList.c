#include <stdio.h>
#include <stdlib.h>

void sequential(int* vector, int size, int element){
    int ceil = 0, eliminate = -99999;
    for(int i = 0; i < size; i++){
        if(vector[i] == element){
            vector[i] = eliminate;
            ceil++;
        }
    }

    for(int i = 0; i < size; i++) printf("%d ",vector[i]);
    printf("\n");

    int t = 0;
    while(t < 2){
        for(int i = 0; i < size; i++){
            if(vector[i] == eliminate){
                for(int j = i; j < size - 1; j++){
                    vector[j] = vector[j + 1];
                    vector[j + 1] = eliminate;
                }
            }
        }
    t++;
    }

    if(vector[0] == eliminate) printf("vazia");
    for(int i = 0; i < size - ceil; i++) printf("%d ",vector[i]);

}


int main(){

    int index = 0, num = 0, element = 0, stop = -1;
    int *vector;
    vector  = (int *) malloc(100*(sizeof(int))); // Eu fiz com esse tamanho padrão pois se eu fosse fazer essa alocação pra cada número que fosse adicionado ao loop, os endereços estariam espalhados pela memória e a única forma de acessá-los em sequência seria implementando uma lista encadeada e esse não é o objetivo da questão;
  
    while(1){
        scanf("%d", &num);
        if(num == stop) break;
        else {
            vector[index] = num;
            index++;
        }
    }

    
    
    scanf("%d", &element);

    /*for(int i = 0; i < index; i++) printf("%d ",vector[i]);
    printf("\n");*/

    sequential(vector,index,element);





    free(vector);



}