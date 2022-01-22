// leap year checker coded by Khair Alanam on 22/01/2022

#include <stdio.h>                               // import stdio.h library

int main()                                       // start of the main() function
{
  int year;                                      // initialise year

  printf("Enter the year: ");                    // statement for year
  scanf("%d", &year);                            // reading year input

  if (year % 4 == 0)                             // if year is divisible by 4 (main)
  {
    if (year % 100 == 0)                         // if year is divisible by 100 (nested x 1)
    {

      if (year % 400 == 0)                       // if year is divisible by 400 (nested x 2)
      {
        printf("%d is a leap year\n", year);     // leap year (nested x 2)
        
      }

      else                                       // year is not divisble by 400 (nested x 2)
      {
        printf("%d is not a leap year\n", year); // not a leap year (nested x 2)
      }

    }

    else                                         // year is not divisible by 100
    {
      printf("%d is a leap year\n", year);       // not a leap year (nested x 1)
    }

  }

  else                                           // year is not divisible by 4 (main)
  {
    printf("%d is not a leap year\n", year);     // not a leap year (main)
  }

  return 0;                                      // return integer 0
}                                                // end of main() function