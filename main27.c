// Program for e^x coded by Khair Alanam on 04/02/2022

#include <stdio.h>                                       // import stdio.h library

int main()                                               // start of the main() function
{
	float x, term = 1, result = 1;                         // initialise x, term, result
	int n;                                                 // initialise n for number of terms
	
  printf("Enter x for e^x : ");                          // print statement for x
	scanf("%f", &x);                                       // read x

	printf("Enter the number of terms : ");                // print statement for n
	scanf("%d", &n);                                       // read n

	for (int i = 1; i < n; i++)                            // for loop for result calculation
	{
	  term *= (x / i);                                     // term calculation
	  result += term;                                      // add term to result
	}                                                      // end of the for loop

	printf("\v\nThe result e^%f is : %f\n", x, result);    // print result
  return 0;                                              // return integer 0
}                                                        // end of main() function