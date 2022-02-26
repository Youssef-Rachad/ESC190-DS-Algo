// ESC190 Lecture: 7
// Date : 27/01/2022


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1.
// void *malloc(size_t size; //undefined values
// void *calloc(size_t nmeb, size_t size); // 0 values
// resize
// void *realloc(void *ptr, size_t size);
// free
// void free(void *ptr)

//4.
void wrong_change_array_size(int* ptr){
    ptr = realloc(ptr, sizeof(int) * 4);
} // ptr is lost when function returns causing mem leak!!
void change_array_size(int** ptr){
    *ptr = realloc(*ptr, sizeof(int)*4);
}// realloc frees when re-allocating

//5. Structure variables, structs
struct pricetag{
    double price;
    double sale_price;
    char item_name[100];
}; // semi colon is important
struct pricetag new_item = {10.99, 4.99, "shelf"};

typedef struct{
    double price; // = 0.99 would be a default values
    double sales; // = 1.00
    char item_name[100]; //"object"
} pricetag2;
pricetag2 new_item2 = {10.99, 4.99, "shelf"};

//using pointers to structs is more efficient
//struct pricetag *ptag_ptr;
//ptag_ptr = malloc(sizeof(struct pricetag));
//ptag_ptr->sale_price = 0.15;

int main(int argc, char* argv[]){
    //1.
    int n = 5;
    int *ptr_a = malloc(n * sizeof(int)); // array[5]
    int *ptr_b = calloc(n, sizeof(int)); // array[5] = {0};
    int *ptr_another = ptr_b;
    free(ptr_a);
    free(ptr_another); //equiv to freeing ptr_b
    //2.
    int m = 4;
    int *ptr_c = calloc(n, sizeof(int));
    int *another = ptr_b;
    ptr_b = realloc(ptr_b, 2*sizeof(int)); //shrink in place
    another = ptr_b;
    ptr_b = realloc(ptr_b, 6*sizeof(int)); //expand, may relocate
    another = ptr_b;
    free(ptr_b); // equiv to free(another)

    //3.
    //array of arrays
    //you need 6 free statements
    int **y= (int **)malloc(sizeof(int*)*5);
    for(int i=0; i<5; i++){
        *(y+i) = (int *)calloc(2, sizeof(int)); // each array element points to an array pointer
    }
    //4.
    int* ptr = (int *)malloc(sizeof(int)*2);
    change_array_size(&ptr);
    return 0;
}
