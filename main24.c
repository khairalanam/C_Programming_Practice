// Program to calculate sum of of every third integer coded by Khair Alanam on 29/01/2022

#include <stdio.h>                                                        // import stdio.h library

int main()                                                                // start of the main() function
{
  int i=1, n, total=0, new_number=0;                                      // initialise i=1, n, total

  printf("Enter the index upto which the sum is calculated: ");           // print statement for n
  scanf("%d", &n);                                                        // reading n input

  while (i <= n)                                                          // while loop
  {
    if (i == 1)                                                           // if i = 1
    {
      total = 2;                                                          // assign value 2 to total
      new_number = 2;                                                     // new_number to store the previous value
      i++;                                                                // update statement
    }
    else                                                                  // else statement
    {
      new_number += 3;                                                    // new term of the series
      total += new_number;                                                // new term added to the total
      i++;                                                                // update statement
    }
  }                                                                       // end of while loop

  printf("\nThe sum is: %d\n", total);                                    // print total

  return 0;                                                               // return integer 0
}                                                                         // end of main() function