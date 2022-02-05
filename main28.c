// Patterns coded by Khair Alanam on 04/02/2022

#include <stdio.h>                                      // import stdio.h library
#include <stdbool.h>                                    // import stdbool.h library for bool datatype

int main()                                              // start of main() function
{
  int n;                                                // initialise n for selecting the pattern
  bool isValid = true;                                  // initialise isValid for while loop                    

  while (isValid)                                       // while loop for n
  {
    printf("*****************************\n");          // decoration text
    printf("1. Half Pyramid\n");                        // text
    printf("2. Inverted Half Pyramid\n");               // text
    printf("3. Hollow Inverted Half Pyramid\n");        // text
    printf("4. Full Pyramid\n");                        // text
    printf("5. Inverted Full Pyramid\n");               // text
    printf("6. Hollow Full Pyramid\n");                 // text
    printf("*****************************\n\v");        // decoration text
    printf("Enter your choice (1-6): ");                // print statement for n
    scanf("%d", &n);                                    // read n

    switch(n)                                           // switch case for n
    {
      case 1:                                           // n = 1
      case 2:                                           // n = 2
      case 3:                                           // n = 3
      case 4:                                           // n = 4
      case 5:                                           // n = 5
      case 6:                                           // n = 6
      isValid = false;                                  // break out of while loop
      break;                                            // break out of switch case
      default:                                          // default statement
      printf("\nInvalid Input!\n");                     // when n is invalid
    }
  }

  // Half Pyramid Pattern

  if (n == 1)                                           // when n = 1
  {
    for(int i = 1; i <= 6; i++)                         // for loop in i
    {
      printf("\n");                                     // new line
      
      for(int j = 1; j <= i; j++)                       // for loop in j
      {
        printf("* ");                                   // print asterisk
      }
    }
    printf("\n");                                       // new line
  }

  // Inverted Half Pyramid Pattern

  if (n == 2)                                           // when n = 2
  {
    for(int i = 1; i <=6; i++)                          // for loop in i
    {
      printf("\n");                                     // new line
      
      for(int j = 7 - i; j >= 1; j--)                   // for loop in j
      {
        printf("* ");                                   // print asterisk
      }
    }
    printf("\n");                                       // new line
  }

  // Hollow Inverted Half Pyramid Pattern

  if (n == 3)                                           // when n = 2
  {
    for(int i = 1; i <=6; i++)                          // for loop in i
    {
      printf("\n");                                     // new line
      
      for(int j = 7 - i; j >= 1; j--)                   // for loop in j
      {
        if (i == 1 || i == 6)                           // when i is top or last row
        {
          printf("* ");                                 // print asterisk
        }
        else                                            // if in-between rows
        {
          if (j == 7 - i || j == 1)                     // if j is first or last column
          {
            printf("* ");                               // print asterisk
          }
          else                                          // if in-between columns
          {
            printf("  ");                               // print empty space
          }
        }
      }
    }

    printf("\n");                                       // new line
  }

  // Full Pyramid Pattern

  if (n == 4)                                           // when n = 4
  {
    for(int i = 1; i <= 7; i++)                         // for loop in i
    {
      for(int j = 1; j <= 7 - i; j++)                   // for loop in j
      {
        printf(" ");                                    // print empty space
      }

      for(int k = 2; k <= i; k++)                       // for loop in k
      {
        printf("* ");                                   // print asterisk
      }

      printf("\n");                                     // new line
    }
  }

  // Inverted Full Pyramid Pattern

  if (n == 5)                                           // when n = 5
  {
    for(int i = 6; i >= 0; i--)                         // for loop in i
    {
      for(int j = 0; j <= 7 - i; j++)                   // for loop in j
      {
        printf(" ");                                    // print empty space
      }

      for(int k = 1; k <= i; k++)                       // for loop in k
      {
        printf("* ");                                   // print asterisk
      }

      printf("\n");                                     // new line
    }
  }

  // Hollow Full Pyramid Pattern

  if (n == 6)                                           // when n = 6
  {
    for(int i = 1; i <= 7; i++)                         // for loop in i
    {
      for(int j = 1; j <= 7 - i; j++)                   // for loop in j
      {
        printf(" ");                                    // print empty space
      }

      for(int k = 2; k <= i; k++)                       // for loop in k
      {
        if (k == 2 || k == i)                           // final points
        {
          printf("* ");                                 // print asterisk
        }
        else                                            // else statement
        {
          if (i == 7)                                   // last row
          {
            printf("* ");                               // print asterisk
          }
          else                                          // else statement
          {
            printf("  ");                               // print empty space
          }
        }
      }

      printf("\n");                                     // new line
    }
  }

  return 0;                                             // return integer 0
}                                                       // end of main() function