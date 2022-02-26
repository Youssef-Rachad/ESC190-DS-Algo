// ESC190 Lecture: 6
// Date : 24/01/2022

// Recap: Lecture 5
// (n-1) + (n-2) + ... + 2 + 1 = n^2-n / 2
//
// 1. Pointer Variables
// int x = 5;
// int* ptr_x = &x; // pointer to x
// int** ptr_ptr_x = &ptr_x; // pointer to the pointer of x
// printf("x=%d, ptr to x is %p, ptr to ptr is %p", x, &x, &ptr_x);
// printf("x=%d, ptr to x is %p, ptr to ptr is %p", x, ptr_x, ptr_ptr_x)
// * is the derefencing operator
// value of x stored at &x
// value of *ptr_x stored at &x
// value of **ptr_ptr_x stored at &x
// Reminder:
// *var get the value in memory address var
// &var get the memory address of var
// NOTE
// dont use without initialising
// do not mix datatypes in printf
// do not manually set the memory (also using non memory adresses)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2. Passing variables by reference
void change_variable(int* a){// pass by reference
    *a = 2; 
}

// 3. Pointer Arithmetic
// arrays have pointer to the first element, dereferencing ptr+1 get the next element
void change_int(int* ptr_x){
    *ptr_x = 50;
}
void change_array_size(char* z){
    z = realloc(z, sizeof(char) * 100);
}

int main(int argc, char* argv[]){
    // 1.
    int a=2, b=3, *c, *d;
    c = &a; // c contains the memory address of a
    d = c; // d is the same as c

    *d = b; // assign value of b to a

    c = &b; // c contains the memory address of b
    *d = 6; // assign value 6 to a
    *c = *d; // assign value of a to b (a = 6)

    // 2.
    int x = 5;
    change_variable(&x);
    //
    int x = 100;
    int* ptr_x = &x;
    change_int(ptr_x);

    // x is 50
    char* y = (char *)y;
    return 0;
}

