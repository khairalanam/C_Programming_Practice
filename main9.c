// Program to convert degree Celsius to degree Fahrenheit codedby Khair Alanam on 08/01/2022

#include <stdio.h>                                                                            // importing stdio.h library

int main()                                                                                    // start of the main() function
{
  float celsius, fahrenheit;                                                                  // initialising variables 'celsius' and 'fahrenheit'

  printf("Enter the temperature in degree Celsius: ");                                        // statement for the 'celsius' variables
  scanf("%f", &celsius);                                                                      // reading 'celsius' input from the keyboard
  printf("The entered temperature is: %f\n", celsius);                                        // printing 'celsius'

  fahrenheit = ((9 * celsius)/5) + 32;                                                        // calculating 'fahrenheit'

  printf("The temperature in degree Fahrenheit is: %f\n", fahrenheit);                        // printing 'fahrenheit'

  return 0;                                                                                   // returns integer 0
}                                                                                             // end of main() function