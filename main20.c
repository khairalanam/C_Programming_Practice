// Pythagorean tripet verifier coded by Khair Alanam on 22/01/2022

#include <stdio.h>                                                        // import stdio.h library

int main()                                                                // start of the main() function
{
  int a, b, c;                                                            // initialise a, b, c

  printf("Enter the first number: ");                                     // statement for a
  scanf("%d", &a);                                                        // reading 'a' input
  printf("The entered number: %d\n\v", a);                                // printing 'a'

  printf("Enter the second number: ");                                    // statement for b
  scanf("%d", &b);                                                        // reading 'b' input
  printf("The entered number: %d\n\v", b);                                // printing 'b'

  printf("Enter the third number: ");                                     // statement for c
  scanf("%d", &c);                                                        // reading 'c' input
  printf("The entered number: %d\n\v", c);                                // printing 'c'

  if ((a * a) + (b * b) == (c * c) ||                                     // a^2 + b^2 = c^2
  (a * a) + (c * c) == (b * b) ||                                         // a^2 + c^2 = b^2
  (c * c) + (b * b) == (a * a))                                           // c^2 + b^2 = a^2
  {
    printf("%d, %d, %d are a Pythagorean triplet\n", a, b, c);            // result statement for if
  }

  else                                                                    // if not a Pythagorean triplet
  {
    printf("%d, %d, %d are not a Pythagorean triplet\n", a, b, c);        // result statement for else
  }

  return 0;                                                               // return integer 0
}                                                                         // end of main() function