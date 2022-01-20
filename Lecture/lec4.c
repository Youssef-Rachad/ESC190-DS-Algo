// ESC190 Lecture: 4
// Date : 17/01/2022

// Recap
// header files to seperate a coding project
// Dont return on a void method

//1. Complexity Notation
// Big O notation defines upper bound
// Omega --> lower bound
// Theta --> both
// Proportional to number of operations (not time)
//  eg. size of input, length of array
// Take the fastest growing term ex: 5n^2 + n + 2 -> O(n^2)



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
//1. 
 int n = 10;
 int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
 int sum = 0;
 for(int i = 0; i<=n; i++)
 {
     sum += arr[i];
 }
 printf("%d", sum);
 

  return 0;
}

// 2. insertion sort Omega(n), O(n^2)
// 3. selection sort Omega(n^2), O(n^2)
// 4. bubble sort Omega(n), O(n^2)
// 5. merge sort Omega(), O()
