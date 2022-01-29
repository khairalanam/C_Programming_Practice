// Program to examine a variable and print a message coded by Khair Alanam on 29/01/2022

#include <stdio.h>                                  // import stdio.h library

int main()                                          // start of the main() function
{
  unsigned int flag;                                // initialise flag

  printf("Enter the number for \'flag\': ");        // statement for 'flag'
  scanf("%u", &flag);                               // reading flag input

  switch(flag)                                      // switch case for flag
  {
    case 1:                                         // case 1
    printf("\nIt is Hot.\n");                       // print statement for 1
    break;                                          // break out of the switch case

    case 2:                                         // case 2
    printf("\nIt is Lukewarm.\n");                  // print statement for 2
    break;                                          // break out of the switch case

    case 3:                                         // case 3
    printf("\nIt is Cold.\n");                      // print statement for 3
    break;                                          // break out of the switch case

    default:                                        // if no case matches
    printf("\nIt is Out of Range.\n");              // default print statement
  }

  return 0;                                         // return integer 0
}                                                   // end of the main() function