
#include <stdio.h>

// First program question

int main(){
    int qnt = 0, vpoint = 0, key = 0;
    scanf("%d%d", &key, &qnt); // the key that will be searched and the amount of the elements in the vector
    int numbers[qnt];

    for(int i = 0; i < qnt; i++) scanf("%d",&numbers[i]);
    
    int j, i;
    for(i = 1; i < qnt; i++){ // traversing since the second element to the final
        vpoint = numbers[i]; // an auxiliary variable will receive the actual value at that position
        
        for(j = i - 1; j >= 0 && numbers[j] > vpoint; j--){ // For example: this for will begin in the second element and will decrementing until arrived at zero and while it meets a bigger number
            numbers[j + 1] = numbers[j]; // Makes the swap of positions while the last element is bigger than what was the marked
            
        numbers[j + 1] = vpoint; // Now, the auxiliary is placed in the element position that before was the smallest
    }
    
    printf("%d", numbers[key - 1]); // searching the key and what is the element
    return 0;
}