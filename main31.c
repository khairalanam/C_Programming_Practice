// Ascending order verifier coded by Khair Alanam on 13/02/2022

#include <stdio.h>                                      // import stdio.h header file

int main()                                              // main() start
{
  int numbers[10];                                      // initialise numbers array

  for (int i = 0; i < 10; i++)                          // for loop for i
  {
    printf("\nEnter the element no. %d: ", i+1);        // print statement for i'th element
    scanf("%d", &numbers[i]);                           // read input for i
  }

  printf("\n\vThe numbers entered are: {");             // statement for numbers array

  for(int j = 0; j < 10;j++)                            // for loop for j
  {
    if (j == 9)                                         // if it is the last element
    {
      printf("%d}\n", numbers[j]);                      // print the closing array
    }
    else                                                // if not the last element
    {
      printf("%d, ", numbers[j]);                       // printing the numbers
    }
  }

  for(int k = 0; k < 10; k++)                           // for loop for k
  {
    if (k == 9)                                         // if it is the last element
    {
      printf("The array is in ascending order.\n");     // print statement for the positive result
    }

    if (numbers[k+1] < numbers[k])                      // if first element is greater than the second element
    {
      printf("The array is not in ascending order.\n"); // print statement for the negative result
      break;                                            // break out of the loop
    }
  }

  return 0;                                             // return integer 0
}                                                       // main() start