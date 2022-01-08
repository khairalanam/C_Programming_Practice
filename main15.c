// Program to evaluate the expression (a>b)&&((c<d)||(e==f)) coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                               // importing stdio.h library

int main()                                                       // start of the main() function
{
  int a, b, c, d, e, f, result;                                  // initialising a, b, c, d, e, f, result variables

  printf("Enter the first number: ");                            // statement for the 'a' input
  scanf("%d", &a);                                               // reading 'a' input from the keyboard
  printf("The entered number is: %d \n", a);                     // printing 'a'

  printf("\vEnter the second number: ");                         // statement for the 'b' input
  scanf("%d", &b);                                               // reading 'b' input from the keyboard
  printf("The entered number is: %d \n", b);                     // printing 'b'

  printf("\vEnter the third number: ");                          // statement for the 'c' input
  scanf("%d", &c);                                               // reading 'c' input from the keyboard
  printf("The entered number is: %d \n", c);                     // printing 'c'

  printf("\vEnter the fourth number: ");                         // statement for the 'd' input
  scanf("%d", &d);                                               // reading 'd' input from the keyboard
  printf("The entered number is: %d \n", d);                     // printing 'd'

  printf("\vEnter the fifth number: ");                          // statement for the 'e' input
  scanf("%d", &e);                                               // reading 'e' input from the keyboard
  printf("The entered number is: %d \n", e);                     // printing 'e'

  printf("\vEnter the sixth number: ");                          // statement for the 'f' input
  scanf("%d", &f);                                               // reading 'f' input from the keyboard
  printf("The entered number is: %d \n", f);                     // printing 'f'

  result = (a > b) && ((c < d) || (e == f));                     // finding the result

  printf("\vThe result is: %d\n", result);                       // printing the result
  
  return 0;                                                      // returns integer 0
}                                                                // end of the main() function