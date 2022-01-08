// Program to convert mass in lbs to kg coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                         // importing stdio.h library

int main()                                                 // start of the main() function
{
  float mass_lbs, mass_kgs;                                // initialising mass_lbs, mass_kgs variables

  printf("Enter the mass in lbs: ");                       // statement for mass_lbs variable
  scanf("%f", &mass_lbs);                                  // reading mass_lbs input from the keyboard
  printf("The entered mass is: %f \n", mass_lbs);          // printng mass_lbs

  mass_kgs = (mass_lbs/2.20462);                           // calculating mass_kgs from mass_lbs

  printf("\vThe mass in kilograms is: %f\n", mass_kgs);    // printing mass_kgs

  return 0;                                                // returns integer 0
}                                                          // end of the main() function