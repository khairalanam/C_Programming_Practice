// Program to examine the tmeperature of water coded by Khair Alanam on 29/01/2022

#include <stdio.h>                                                      // import stdio.h library

int main()                                                              // start of the main() function
{
  float temperature;                                                    // initialise temperature

  printf("Enter the temperature in degree Celsius: ");                  // print statement for temperature
  scanf("%f", &temperature);                                            // reading temperature input

  if (temperature < 0)                                                  // if temp below freezing point
  {
    printf("\nThe substance is ice.\n");                                // print ice
  }

  else if (0 <= temperature && temperature <= 100)                      // if temp between 0 - 100
  {
    printf("\nThe substance is water.\n");                              // print water
  }

  else                                                                  // if temp > 100
  {
    printf("\nThe substance is steam.\n");                              // print steam
  }

  return 0;                                                             // return integer 0
}                                                                       // end of the main() function

// switch block cannot be used here as the switch requires an integer argument and not the float argument