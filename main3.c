// Program to divide two integers and print the quotient and remainder coded by Khair Alanam on 17/12/2021 at 4:02 PM

#include <stdio.h>                                            // Header file for printf function

int main()                                                    // main function begins

{
  int a, b, c, d;                                             // Stores first number, second number, quotient and the remainder
  printf("Enter the first number: ");                         // entry of the first number
  scanf("%d", &a);                                            // Read first number from keyboard
  printf("First number = %d \n", a);                          // prints the first number

  printf("Enter the second number: ");                        // entry of the second number
  scanf("%d", &b);                                            // Read second number from keyboard
  printf("Second number = %d \n", b);                         // prints the second number

  c = a / b;                                                  // divide two numbers and store quotient in c
  d = a - (b*c);                                              // Calculating the remainder and store it in d

  printf("Quotient: %d / %d = %d \n", a, b, c);               // prints quotient of two numbers
  printf("Remainder: %d \n", d);                              // prints remainder
  printf("Full equation: %d = (%d x %d) + %d", a, b, c, d);   // prints the full equation
  return 0;                                                   // returns integer value 0
}                                                             // end of main function