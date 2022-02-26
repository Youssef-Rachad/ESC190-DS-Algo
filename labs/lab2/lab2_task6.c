#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int** p; 
    //printf("p mem %p; val %p\n", &p, p);
    int x = 10;
    //printf("x mem %p; val %d\n", &x, x);
    int y = 11;
    //printf("y mem %p; val %d\n", &y, y);
    int z = 12;
    //printf("z mem %p; val %d\n", &z, z);

    int * ptr = (int *)malloc(sizeof(int) * 3);
    *ptr = x;
    //printf("ptr mem %p; val %d; point to\n", ptr, *ptr);
    *(ptr + 1) = y;
    *(ptr + 2) = z;

    p = &ptr;
    //Part (b)
    free(*p);
    return 0;
}
/* Questions
 * (a)
 * -------------------------------------
 * | Variable | Memory Address | Value |
 * | x        | ptr            | 10    |
 * | y        | 0x002          | 11    |
 * | z        | 0x003          | 12    |
 * | ptr      | p              | 0x001 |
 * | p        | 0x0EF          | 0x009 |
 * -------------------------------------
 *  (b)
 *  free(&z) gives "attempt to free a non-heap object" error
 */
