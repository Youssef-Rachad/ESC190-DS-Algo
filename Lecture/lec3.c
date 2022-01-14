// ESC190 Lecture: 3
// Date : 14/01/2021


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. and and or
// textbook claims #include <is0646.h>

// 2. Functions
int add(int x, int y);
int multiply(int x, int y);
// This can be refactored where 
// - function prototypes --> header file
// - function definitions --> source file

// 3. Unlike python, C doesnt specify spacings
// space code for readability

// 4. Static Arrays (0-indexing)
// datatype name[length];
// datatype name[] = {...};
// name[index] = value
// ex: int arr[10] = {0}// all elements are 0
int main(int argc, char* argv[]){

    printf("%dx%d=%d", 40, 50, multiply(40,50));
    return 0;
}


int add(int x, int y){
    int result = x + y;
    x = 200;// note on scope: this is local to the function only
    return result;
}
int multiply(int x, int y){
    int result = 0;
    for(int i=0; i<y; i++){
        result = add(result, x);
    }
    return result;
}
