// Maximum element finder coded by Khair Alanam on 13/02/2022

#include <stdio.h>                                    // import stdio.h header file

int main()                                            // main() start
{
  int numbers[10];                                    // initialise numbers array

  for (int i = 0; i < 10; i++)                        // for loop for i
  {
    printf("\nEnter the element no. %d: ", i+1);      // print statement for i'th element
    scanf("%d", &numbers[i]);                         // read input for i
  }

  printf("\n\vThe numbers entered are: {");           // statement for numbers array

  for(int j = 0; j < 10;j++)                          // for loop for j
  {
    if (j == 9)                                       // if it is the last element
    {
      printf("%d}\n", numbers[j]);                    // print the closing array
    }
    else                                              // if not the last element
    {
      printf("%d, ", numbers[j]);                     // printing the numbers
    }
  }

  int max = numbers[0];                               // initialising max to be the first element of the array

  for(int k = 0; k < 10; k++)                         // for loop for k
  {
    if (max < numbers[k])                             // if max is less than the element
    {
      max = numbers[k];                               // the element is assigned to max
    }
  }

  printf("The maximum from the array is: %d\n", max); // print max

  return 0;                                           // return integer 0
}                                                     // main() start