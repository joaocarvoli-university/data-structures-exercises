#include <stdio.h>

int soma(int n){
    if(n == 1) return 1; // base case
    return n + soma(n - 1); // recursion formula
}

int main(){

    int n = 0;
    scanf("%d", &n);
    printf("%d",soma(n));
}
// testando essa função
// De nada!