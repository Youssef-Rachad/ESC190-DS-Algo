#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int x = 0;
    int* ptr = &x; //get the address of x
    fprintf(stdout, "x contains the value %d at location %p\n",
            *ptr, ptr);
    return 0;
}
