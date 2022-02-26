#include <stdio.h>
#include <stdlib.h>

void append(int** x, int* n, int val){
    *x = realloc(*x, (++*n)*sizeof(int));
    *(*x+(*n)-1) = val;
}
