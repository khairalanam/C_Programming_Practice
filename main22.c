// Program to  print out color from color code coded by Khair Alanam on 29/01/2022

#include <stdio.h>                                             // import stdio.h library

int main()                                                     // start of the main() function
{
  char color_code;                                             // initialise color_code

  printf("Enter the color code: ");                            // print statement for color_code
  scanf("%s", &color_code);                                    // reading color_code input

  switch(color_code)                                           // switch case for color_code
  {
    case 'r':                                                  // case r
    case 'R':                                                  // case R
    printf("\nYou entered the color code for Red.\n");         // print statement for Red
    break;                                                     // break statement

    case 'g':                                                  // case g
    case 'G':                                                  // case G
    printf("\nYou entered the color code for Green.\n");       // print statement for Green
    break;                                                     // break statement

    case 'b':                                                  // case b
    case 'B':                                                  // case B
    printf("\nYou entered the color code for Blue.\n");        // print statement for Blue
    break;                                                     // break statement

    default:                                                   // default case
    printf("\nYou entered the color code for Black.\n");       // print statement for Black
  }

  return 0;                                                    // return integer 0
}                                                              // end of the main() function