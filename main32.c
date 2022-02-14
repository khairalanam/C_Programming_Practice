// 5x5 Identity matrix verifier coded by Khair Alanam on 13/02/2022

#include <stdio.h>                                                                          // import stdio.h header file

int main()                                                                                  // main start()
{
  int rows[5][5];                                                                           // initialise rows array
  
  for(int i = 0; i < 5; i++)                                                                // for loop for i
  {
    for(int j = 0; j < 5; j++)                                                              // for loop for j
    {
      printf("\nEnter the element of position (%d, %d): ", i + 1, j + 1);                   // print statement for the element assignment
      scanf("%d", &rows[i][j]);                                                             // read input
    }
  }

  printf("\nThe 5x5 matrix made is: ");                                                     // text
  printf("\n|%d %d %d %d %d|", rows[0][0], rows[0][1], rows[0][2], rows[0][3], rows[0][4]); // first row
  printf("\n|%d %d %d %d %d|", rows[1][0], rows[1][1], rows[1][2], rows[1][3], rows[1][4]); // second row
  printf("\n|%d %d %d %d %d|", rows[2][0], rows[2][1], rows[2][2], rows[2][3], rows[2][4]); // third row
  printf("\n|%d %d %d %d %d|", rows[3][0], rows[3][1], rows[3][2], rows[3][3], rows[3][4]); // fourth row
  printf("\n|%d %d %d %d %d|", rows[4][0], rows[4][1], rows[4][2], rows[4][3], rows[4][4]); // fifth row
 

  int verifier = 1;                                                                         // initialise verifier for matrix

  for(int k = 0; k < 5; k++)                                                                // for loop in k
  {
    for(int l = 0; l < 5; l++)                                                              // for loop in l
    {
      if(k == l && rows[k][l] == 1)                                                         // if diagonal elements are 1
      {
        if (k == l && k == 4)
        {
          printf("\n\vThis is an identity matrix.\n");                                      // statement for identity matrix
        }
        continue;                                                                           // continue if the parent condition is true
      }

      if (k != l && rows[k][l] == 0)                                                        // if rest of the elements are 0
      {
        continue;                                                                           // continue
      }

      printf("\n\vThis is not an identity matrix.\n");                                      // execute if the above conditions are false
      verifier = 0;                                                                         // verifier becomes 0
      break;                                                                                // break out of for loop in l
    }

    if (verifier == 0)                                                                      // condition to break out of the main loop
    {
      break;                                                                                // break out of for loop in k
    }
  }
}