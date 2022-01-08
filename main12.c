// Program to convert feet to centimetres coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                            // importing stdio.h library

int main()                                                    // start of the main() function
{
  float len_feet, len_cms;                                    // initialising len_feet, len_cms variables

  printf("Enter the length in feet: ");                       // statement for the len_feet variable
  scanf("%f", &len_feet);                                     // reading len_feet input from the keyboard
  printf("The entered number is: %f\n", len_feet);            // printing len_feet

  len_cms = (len_feet*30.48);                                 // calculating len_cms

  printf("\vThe length in centimetres is: %f\n", len_cms);    // printing len_cms

  return 0;                                                   // returning integer 0
}                                                             // end of the main() function