// Program to convert length in yards to metres coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                                 // importing stdio.h library

int main()                                                         // start of the main() function
{
  float len_yard, len_m;                                           // initialising len_yard and len_m variables

  printf("Enter the length in yards: ");                           // statement of the len_yard variable
  scanf("%f", &len_yard);                                          // reading len_yard input from the keyboard
  printf("The entered length in yards: %f\n", len_yard);           // printing len_yard

  len_m = len_yard * 0.9144;                                       // calculating len_m from len_yard

  printf("\vThe length in metres is: %f\n", len_m);                // printing len_m
  return 0;                                                        // returns integer 0
}                                                                  // end of the main() function