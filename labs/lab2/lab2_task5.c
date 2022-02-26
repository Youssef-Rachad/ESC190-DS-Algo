#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int* p = (int *)malloc(sizeof(int));
    int* q = (int *)malloc(sizeof(int)*2);
    *p = 1;
    *q = 10;

    q=p;
    free(q);
    free(p);
    return 0;
}
/* Questions
 * (a)
 * ptr --> value
 * p   --> 1
 * q   --> 10
 * (b)
 * Freeing unefined memory. q is assigned p, then q is freed.
 * we cannot free p as this memory block is undefined.
 */
