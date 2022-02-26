#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int x = 0;
    int y = 0;

    int * ptr_x = &x;
    int * ptr_y = &y;

    int ** pptr_x = &ptr_x;
    int ** pptr_y = &ptr_y;

    fprintf(stdout, "x contains the value %d at location %p\n", *ptr_x, ptr_x);
    fprintf(stdout, "y contains the value %d at location %p\n", *ptr_y, ptr_y);


    //fprintf(stdout, "x pointer contains the value %p at location %p\n", *pptr_x, pptr_x);
    //fprintf(stdout, "y pointer contains the value %p at location %p\n", *pptr_y, pptr_y);
    return 0;
}

/* Questions
 * (a)
 * |    pptr_x    |     ptr_x    | x |   |     pptr_y   |     ptr_y    | y |
 * -----------------------------------   -----------------------------------
 * |0x7ffcf560cc68|0x7ffcf560cc60| 0 |   |0x7ffcf560cc70|0x7ffcf560cc64| 0 |
 * -----------------------------------   -----------------------------------
 *  (b) fprintf(stdout,"%p"*(a) );
 *  (c) 
 */
