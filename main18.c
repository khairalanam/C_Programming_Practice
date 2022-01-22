// Maximum of three values coded by Khair Alanam on 22/01/2022

#include <stdio.h>                                                  // import stdio.h library

int main()                                                          // start of the main() function
{
  int a, b, c;                                                      // initialise a, b, c

  printf("Enter the first number: ");                               // statement for a
  scanf("%d", &a);                                                  // reading 'a' input
  printf("The entered first number is: %d\n\v", a);                 // printing 'a'

  printf("Enter the second number: ");                              // statement for b
  scanf("%d", &b);                                                  // reading 'b' input
  printf("The entered second number is: %d\n\v", b);                // printing 'b'

  printf("Enter the third number: ");                               // statement for c
  scanf("%d", &c);                                                  // reading 'c' input
  printf("The entered third number is: %d\n\v", c);                 // printing 'c'

  int max = 0;                                                      // initialise max

  if (a > b && a > c)                                               // if a > b and c
  {
    max = a;                                                        // assign a to max
  }

  else if (b > a && b > c)                                          // if b > a and c
  {
    max = b;                                                        // assign b to max
  }

  else                                                              // else implies c > a and b
  {
    max = c;                                                        // assign c to max
  }

  printf("The maximum value among the three is %d\n\v", max);       // print max value

  int d, e, f;

  printf("Using ternary operator........\n\v");                     // print statement for ternary operator

  printf("Enter the first number: ");                               // statement for d
  scanf("%d", &d);                                                  // reading 'd' input
  printf("The entered first number is: %d\n\v", d);                 // printing 'd'

  printf("Enter the second number: ");                              // statement for e
  scanf("%d", &e);                                                  // reading 'e' input
  printf("The entered second number is: %d\n\v", e);                // printing 'e'

  printf("Enter the third number: ");                               // statement for f
  scanf("%d", &f);                                                  // reading 'f' input
  printf("The entered third number is: %d\n\v", f);                 // printing 'f'

  int max_tern_1 = (d > e) ? d : e;                                 // ternary operation between d and e
  int max_tern_2 = (f > e) ? f : e;                                 // ternary operation between f and e

  printf("Max value by ternary operation is %d\n", max_tern_2);     // prints max value
  return 0;                                                         // returns integer 0
}                                                                   // end of the main() function