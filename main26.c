// Program to calculate a^n coded by Khair Alanam coded by 29/01/2022

#include <stdio.h>                                               // import stdio.h library

int main()                                                       // start of main() function
{
  float a;                                                       // initialise a
  unsigned int n;                                                // initialise n
  long double result=1;                                          // initialise result

  printf("Enter the base number: ");                             // statement for a
  scanf("%f", &a);                                               // reading a

  printf("Enter the exponent: ");                                // statement for n
  scanf("%u", &n);                                               // reading n

  unsigned int i=1;                                              // initialise i

  while (i <= n)                                                 // while loop
  {
    result *= a;                                                 // calculate result
    i++;                                                         // update statement
  }                                                              // end of while loop

  printf("\nThe result is: %Lf \n", result);                     // print result

  return 0;                                                      // returns integer 0
}                                                                // end of main() function