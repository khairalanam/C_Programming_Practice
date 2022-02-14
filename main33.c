// Palindrome checker coded by Khair Alanam on 13/02/2022

#include <stdio.h>                                          // import stdio.h header file
#include <string.h>                                         // import string.h header file

int main()                                                  // main() start
{
  char word[25];                                            // initialise word
  int mid_length;                                           // initialise mid_length
  
  printf("\nEnter the word: ");                             // print statement for word
  gets(word);                                               // read word
  int length = strlen(word);                                // initialise length for the length of the word

  mid_length = length / 2;                                  // getting the middle range

  for(int i = 0, j = length - 1; i <= mid_length; i++, j--) // for loop in i and j
  {
    if (length == 1)                                        // if the word is not even a word
    {
      printf("This is only an alphabet.\n");                // text
      break;                                                // break out of loop
    }
    if (word[i] != word[j])                                 // if letter in the first half is not equal to the letter in second half
    {
      printf("This is not a Palindrome.\n");                // negative result
      break;                                                // break out of loop
    }
    else                                                    // if they are same
    {
      if (i == mid_length)                                  // if i is in the middle or almost at middle (if the length is even or odd)
      {
        printf("This is a Palindrome.\n");                  // positive result
        continue;                                           // continue the loop
      }
    }
  }

  return 0;                                                 // return integer 0
}                                                           // main() end