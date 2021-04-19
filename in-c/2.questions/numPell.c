#include <stdio.h>

int pellNumber(int n){

    if(n == 0) return 0; // base case
    if(n == 1) return 1; // second base case
    return 2*pellNumber(n - 1) + pellNumber(n - 2); // recursion formula

}

int main(){

    int n = 0;
    scanf("%d", &n);

    printf("%d",pellNumber(n));

}