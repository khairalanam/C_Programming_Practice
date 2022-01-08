// Program to find area and circumference of the circle coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                                                                 // importing stdio.h library
#define PI 3.14159265                                                                              // defining a constant PI = 3.14159265

int main()                                                                                         // start of the main() function
{
  float r;                                                                                         // initialising variable 'r' for radius input
  double area, circumference;                                                                      // initialising variables 'area' and 'circumference'

  printf("Enter the radius of the circle: ");                                                      // statement for the 'r' input from the user
  scanf("%f", &r);                                                                                 // reading 'r' input from the user's keyboard
  printf("The entered number: %f \n", r);                                                          // printing 'r'

  area = PI * r * r;                                                                               // calculating 'area'
  circumference = 2 * PI * r;                                                                      // calculating 'circumference'

  printf("\vThe circumference of the circle of radius \"%f\" is: %g \n", r, circumference);        // printing 'circumference'
  printf("\vThe area of the circle of radius \"%f\" is: %g \n", r, area);                          // printing 'area'

  return 0;                                                                                        // returning integer 0
}                                                                                                  //end of main function