// Program to subtract two integers and print the difference coded by Khair Alanam on 17/12/2021 at 3:28 PM

#include <stdio.h>                                     // Header file for printf function

int main()                                             // main function begins

{
  int a, b, c;                                         // Stores first number, second number and the difference
  printf("Enter the first number: ");                  // entry of the first number
  scanf("%d", &a);                                     // Read first number from keyboard
  printf("First number = %d \n", a);                   // prints the first number

  printf("Enter the second number: ");                 // entry of the second number
  scanf("%d", &b);                                     // Read second number from keyboard
  printf("Second number = %d \n", b);                  // prints the second number

  c = a - b;                                           // subtract two numbers and store difference in c

  printf("Difference: %d - %d = %d", a, b, c);         //prints difference of two numbers
  return 0;                                            // returns the integer value 0
}                                                      // end of main function