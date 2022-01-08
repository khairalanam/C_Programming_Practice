// Program to perform bitwise operations on two bit-strings coded by Khair Alanam on 08/01/2022

#include <stdio.h>                                                     // importing stdio.h library

int main()                                                             // start of the main() function
{
  unsigned long long int a, b;                                         // initialising a and b
  unsigned long long int result_or, result_and, result_xor;            // initialising result_or, result_and, result_xor
  unsigned long long int result_nor, result_nand, result_xnor;         // initialising result_nor, result_nand, result_xnor
  
  printf("Enter the first bit-string: ");                              // statement for a
  scanf("%llu", &a);                                                   // read a input
  printf("The first bit-string is: %llu\n", a);                        // print a
  
  printf("\vEnter the second bit-string: ");                           // statement for b
  scanf("%llu", &b);                                                   // read b input
  printf("The second bit-string is: %llu\n", b);                       // print b
  
  result_or = a | b;                                                   // calculating result_or
  result_and = a & b;                                                  // calculating result_and
  result_xor = a ^ b;                                                  // calculating result_xor
  result_nor = ! (a | b);                                              // calculating result_nor
  result_nand = ! (a & b);                                             // calculating result_nand
  result_xnor = ! (a ^ b);                                             // calculating result_xnor

  printf("\vThe result of OR operation: %llu\n", result_or);           // print result_or
  printf("The result of AND operation: %llu\n", result_and);           // print result_and
  printf("The result of XOR operation: %llu\n", result_xor);           // print result_xor
  printf("The result of NOR operation: %llu\n", result_nor);           // print result_nor
  printf("The result of NAND operation: %llu\n", result_nand);         // print result_nand
  printf("The result of XNOR operation: %llu\n", result_xnor);         // print result_xnor

  return 0;                                                            // returns integer 0
}                                                                      // end of the main() function