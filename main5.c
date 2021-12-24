// Program to swap integer values using multiplication and division coded by Khair Alanam on 24/12/2021

#include <stdio.h>                                                         // header file for library function printf()

int main()                                                                 // main function begins
{
  int a, b;                                                                // swap variables a and b
  
  printf("Enter first value: ");                                           // entry of a
  scanf("%d", &a);                                                         // read a
  printf("First value: %d \n", a);                                         // print a

  printf("Enter second value: ");                                          // entry of b
  scanf("%d", &b);                                                         // read b
  printf("Second value: %d \n", b);                                        // print b

  printf("Before swap: First value = %d, Second value = %d \n", a, b);     // print input

  a = a * b;                                                               // store a * b in a
  b = a / b;                                                               // store a / b in a
  a = a / b;                                                               // store a / b in a

  printf("After swap: First value = %d, Second value = %d \n", a, b);      // print output

  return 0;                                                                // returns integer value 0
}                                                                          // end of main function