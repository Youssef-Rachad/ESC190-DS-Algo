// ESC190 Lecture: 5
// Date : 20/01/2022


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1.Insertion Sort
// O(n^2) 
// 1+2+...+(n-1) comparisons = (n^2 + n)/2 →O(n^2)
// 1+2+...+(n-1) swaps →O(n^2)
// therefore O(2n^2) = O(n^2)
// 2.Bubble sort
// Omega(n) (best case) if array is already sorted
// O(n^2) if array is sorted in reverse
// 3.Merge Sort
// Number of levels = log(n) + 1
// O(n*(log(n)+1)) = O(n*log(n))
// note: memory wise, copying the array is costly
// 4.Quick sort
// Omega(nlogn) if the pivot is always the median element
// O(n^2) if the pivot is always the smallest/largest element
// note: done in-place so uses less memory 
// 5. Radix sorting
// Avoids comparing elements by distributing elements by their radix 
int main(int argc, char* argv[]){
  // Use wikipedia docs to implement the algorithms
  return 0;
}
