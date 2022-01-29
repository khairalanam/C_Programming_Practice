// Factorial program coded by Khair Alanam on 29/01/2022

#include <stdio.h>                                           // import stdio.h library

int main()                                                   // start of main() function
{
  long long unsigned int number, product=1;                  // initialise number, product

  printf("Enter the number for the factorial: ");            // print statement for number
  scanf("%llu", &number);                                    // reading input for number

  if (number == 0 || number == 1)                            // 0 or 1
  {
    product = 1;                                             // factorial gives 1
    number--;                                                // update statement
  }

  else                                                       // else statement
  {
    while (number > 0)                                       // while loop
    {
      product *= number;                                     // calculate product
      number--;                                              // update statement
    }
  }

  printf("\nThe factorial is: %llu \n", product);            // prints product

  return 0;                                                  // return integer 0
}                                                            // end of main() function