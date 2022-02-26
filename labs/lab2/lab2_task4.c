#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    // p is a pointer, derefence it to access the int value
    int *p = (int *)malloc(sizeof(int)); // make void pointer of size int and cast it to an int
    fprintf(stdout, "Value stored at address %p: %d\n", p, *p);

    *p = 1;
    fprintf(stdout, "Value stored at address %p: %d\n", p, *p);
    free(p);

    fprintf(stdout, "Value stored at address %p: %d\n", p, *p);
    return 0;
}

/* Questions
 * (a) C made p's value to 0 when it's supposed to be undefined
 * There is no memory leak because at most 8 bytes of memory are used and are freed at the end
 * (b)
 * ==1057443== Conditional jump or move depends on uninitialised value(s)
 * ==1057443==    at 0x4E974F5: vfprintf (in /usr/lib64/libc-2.28.so)
 * ==1057443==    by 0x4E9EDC7: fprintf (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4006A5: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * ===1057443==  Uninitialised value was created by a heap allocation
 * ===1057443==    at 0x4C360A5: malloc (vg_replace_malloc.c:380)
 * ===1057443==    by 0x40067E: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * (c)
 * ==1057443== Conditional jump or move depends on uninitialised value(s)
 * ===1057443==    at 0x4E974F5: vfprintf (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4E9EDC7: fprintf (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4006A5: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * ===1057443==  Uninitialised value was created by a heap allocation
 * ===1057443==    at 0x4C360A5: malloc (vg_replace_malloc.c:380)
 * ===1057443==    by 0x40067E: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * ===1057443==
 * ===1057443== Use of uninitialised value of size 8
 * ===1057443==    at 0x4E9311E: _itoa_word (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4E96BBB: vfprintf (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4E9EDC7: fprintf (in /usr/lib64/libc-2.28.so)
 * ===1057443==    by 0x4006A5: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * ===1057443==  Uninitialised value was created by a heap allocation
 * ===1057443==    at 0x4C360A5: malloc (vg_replace_malloc.c:380)
 * ===1057443==    by 0x40067E: main (in /u/d/rachadyo/labs/lab2/lab2_4.out)
 * g flag allows for precise debugging, line number
 */
