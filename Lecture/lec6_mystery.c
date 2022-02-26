#include <stdlib.h>
#include <stdio.h>
// Mystery code: trace it
int main(){
    int** x = (int **)malloc(sizeof(int*) * 5);
    for (int i=0; i<5; i++){
        *(x+i) = (int *)calloc(10, sizeof(int) * 10);
        printf("%p and the difference with the previous is %ld\n", *(x+i), *(x)-*(x+i));
    }
}

