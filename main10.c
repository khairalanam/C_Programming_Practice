// Program to convert speed in km/h to mile/h coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                          // importing  stdio.h library

int main(void)                                              // start of the main() function
{                           
  float km_speed, mile_speed;                               // initialising variables 'km_speed' and 'mile_speed'

  printf("Enter the speed in km/h: ");                      // statement for the km_speed variable
  scanf("%f", &km_speed);                                   // reading km_speed input from the keyboard
  printf("The entered speed is: %f km/h\n", km_speed);      // printing km_speed

  mile_speed = (km_speed/1.60934);                          // calculating mile_speed from km_speed
  printf("The speed in miles per hour is: %f", mile_speed); // calculating mile_speed

  return 0;                                                 // returns integer 0
}                                                           // end of the main() function  