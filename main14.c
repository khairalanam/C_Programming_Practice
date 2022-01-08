// Program to find simple interest coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                       // importing stdio.h library

int main()                                               // start of the main() function
{
  int principal, rate, time;                             // initlaiising the variables principal, rate and time in years
  float SI;                                              // initialising SI variable
  
  printf("Enter the principal in rupees: ");             // statement for principal
  scanf("%d", &principal);                               // reading principal input
  printf("The entered principal is: %d\n", principal);   // printing principal

  printf("\vEnter the rate in percentage: ");            // statement for rate
  scanf("%d", &rate);                                    // reading rate input
  printf("The entered rate is: %d \n", rate);            // printing rate

  printf("\vEnter the time in years: ");                 // statement for time
  scanf("%d", &time);                                    // reading time input
  printf("The entered time is: %d\n", time);             // printing time

  SI = (principal * rate * time)/100;                    // calculating SI

  printf("\vThe simple interest is: %f", SI);            // printing SI

  return 0;                                              // returns integer 0
}                                                        // end of the main() function