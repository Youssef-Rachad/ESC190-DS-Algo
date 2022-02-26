#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int y[2] = {1, 5};
    int x[3];

    //y[2] = 9; // Question (b)
    for (int i = 0; i < 3; i++)
    {
        x[i] = y[i];
        //fprintf(stdout, "var x at %p  var y at %p\n", &x[i], &y[i]);
        //fprintf(stdout, "var x at %d  var y at %d\n", x[i], y[i]);
    }
    x[2] = 9;

    fprintf(stdout,
            "Addresses of x 0: %p, 1: %p, 2: %p\n",
            x, x+1, x+2);
    fprintf(stdout,
            "Values of x through dereferencing 0: %d, 1: %d, 2: %d\n", *x, *(x+1), *(x+2)
           );

    fprintf(stdout,
            "Values of x through indexing 0: %d, 1: %d, 2: %d\n", x[0], x[1], x[2]
           );

    fprintf(stdout, "Indexing out of range: %d\n", x[3]);
    return 0;
}
/* Questions
 * (a)
 * It is an undefined behaviour that does not throw an error.
 * For this reason, we must be weary of accessing out of bounds
 * as it can return a random value found in memory
 *
 * (b)
 * Nothing, extending y[2] = 9 is undefined behaviour because the array is static. 
 * in the for-loop, x[2] takes the value of y[0] (wrap-around)
 *
 * (c)
 * -------------------------------------
 * | Variable | Memory Address | Value |
 * | x[0]     | 0x7fffa111ea8c |   2   |
 * | x[1]     | 0x7fffa111ea90 |   5   |
 * | x[2]     | 0x7fffa111ea94 |   9   | changed on line 13
 * | y[0]     | 0x7fffa111ea84 |   2   |
 * | y[1]     | 0x7fffa111ea88 |   5   |
 * | y[2]     | 0x7fffa111ea8c |   2   | ???
 */
