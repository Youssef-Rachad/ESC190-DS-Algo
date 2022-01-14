// ESC190 Lecture: 2
// Date : 13/01/2022


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Type-casting is used to change datatypes
// note rounding errors
//
// Avoid overflow and using unitialized variable in a program

// 2. Logical operators
// &&, ||, ^, <, >, >>, <<
// Incrementors
// ++var, var++, var+=
// --var, var--, var-=
//
// Precedence:
// ++,--
// *,/,%
// +,-
// =,(*/+-)=

// 3. Program Control
// if/else blocks
// for loop
// while loop
int main(int argc, char* argv[]){
  // 1. chars are encoded in the ASCII table using numbers
  printf("%c, %c, %c\n", 'c', 'c'+1, 'c'+2);
  // Signed and Unsigned integers
  int integer = 100;
  unsigned int natural = -100;
  // prints error
  printf("%u\n", natural);
  // prints normally, could be implicit typecasting
  printf("%d\n", natural);

  // 2.
  // 3.
  if(3>0){
      printf("will always print\n");
  } else {
      printf("wont print because the first block ran\n");
  }
  for(int i = 0; i<10;i++){
      printf("%d", ++i);
  }
  int variable = 9;
  while((variable<<2)<50){
      printf("bitshifted");
      variable++;
  }
  printf("%f", 2.0/5.0);
  return 0;
}

