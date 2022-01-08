// Program to evaluate a * (c % b) and a * c % b coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                               // importing stdio.h library

int main()                                                       // start of the main() function
{
  int a, b, c, d, e;                                             // initialising int variables a, b, c, d, e

  printf("Enter the first number: ");                            // statement for the 'a' input
  scanf("%d", &a);                                               // reading 'a' input from the keyboard
  printf("The entered number is: %d \n", a);                     // printing 'a'

  printf("\vEnter the second number: ");                         // statement for the 'b' input
  scanf("%d", &b);                                               // reading 'b' input from the keyboard
  printf("The entered number is: %d \n", b);                     // printing 'b'

  printf("\vEnter the third number: ");                          // statement for the 'c' input
  scanf("%d", &c);                                               // reading 'c' from the keyboard
  printf("The entered number is: %d \n", c);                     // printing 'c'

  d = a * (c % b);                                               // calculating a * (c % b) and assigning it to variable 'd'
  e = a * c % b;                                                 // calculating a * c % b and assigning it to variable 'e'

  printf("\vThe result of a * (c %% b) = %d \n", d);             // printing 'd'
  printf("\vThe result of a * c %% b = %d", e);                  // printing 'e'

  return 0;                                                      // returning the integer 0
}                                                                // end of the main() function