// Program to swap two integers given as input and print the swapped values coded by Khair Alanam on 17/12/2021 at 4:21 PM

#include <stdio.h>                                           // Header file for printf function

int main()                                                   // main function begins
{
  int a, b;                                                  // store the two integers given as input

  printf("Enter the first number: ");                        // entry of the first number
  scanf("%d", &a);                                           // reads the first number from the keyboard
  printf("The first number: %d \n", a);                      // prints the first number

  printf("Enter the second number: ");                       // entry of the second number
  scanf("%d", &b);                                           // reads the second number from the keyboard
  printf("The second number: %d \n", b);                     // prints the second number

  printf("Before swapping: a = %d, b = %d \n", a, b);        // Print the numbers with the given variables

  int x = a;                                                 // assign the value of a to x
  a = b;                                                     // assign the value of b to a
  b = x;                                                     // assign the value of x to b

  printf("After swapping: a = %d, b = %d", a, b);            // prints the swapped numbers with the given variables
  return 0;                                                  // returns the integer value 0
}                                                            // end of main function