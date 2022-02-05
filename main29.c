// Menu-driven program coded by Khair Alanam on 05/02/2022

#include <stdio.h>                                          // import stdio.h library
#include <stdbool.h>                                        // import stdbool.h library for bool
#define PI 3.14159265                                       // defininf constant PI

int main()                                                  // start of main()
{
  char isContinued;                                         // initialise isContinued

  do                                                        // do while loop
  {
    char letter;                                            // initialise letter
    char isContinued;                                       // initialise isContinued

    while (true)                                            // while loop for letter
    {
      char letter;                                          // initialise letter

      printf("\n***************************\n\v");          // decoration text
      printf("List of shapes to find area for:\n");         // text
      printf("C - Circle\n");                               // text
      printf("S - Square\n");                               // text
      printf("R - Rectangle\n");                            // text
      printf("T - Triangle\n");                             // text

      printf("\nChoose the letter to find area: ");         // statement for letter
      scanf("%s", &letter);                                 // read letter

      switch(letter)                                        // switch case for letter
      {
        case 'C':                                           // capital C
        case 'c':                                           // small c
        printf("You entered C!");                           // statement for circle
        break;                                              // break statement

        case 'S':                                           // capital S
        case 's':                                           // small s
        printf("You entered S!");                           // statement for square
        break;                                              // break statement

        case 'R':                                           // capital R
        case 'r':                                           // small r
        printf("You entered R!");                           // statement for rectangle
        break;                                              // break statement
        
        case 'T':                                           // capital T
        case 't':                                           // small t
        printf("You entered T!");                           // statement for triangle
        break;                                              // break statement
        

        default:                                            // other letter
        printf("\nInvalid Input!\n");                       // text for invalid input
        continue;                                           // continue the while loop
      }                                                     // end of switch case

      if (letter == 'C' || letter == 'c')                   // if case for circle
      {
        long double radius;                                 // initialise radius
        long double area;                                   // initialise area

        printf("\nEnter the radius of the circle: ");       // statement for radius
        scanf("%Lf", &radius);                              // read radius

        area = PI * radius * radius;                        // area calculation

        printf("\nArea of the circle is: %Lf\n", area);     // print area
      }

      if (letter == 'S' || letter == 's')                   // if case for square
      {
        long double side_sq;                                // initialise side_sq
        long double area;                                   // initialise area

        printf("\nEnter the side of the square: ");         // statement for side_sq
        scanf("%Lf", &side_sq);                             // read side_sq

        area = side_sq * side_sq;                           // area calculation

        printf("\nArea of the square is: %Lf\n", area);     // print area
      }

      if (letter == 'R' || letter == 'r')                   // if case for rectangle
      {
        long double length;                                 // initialise length
        long double breadth;                                // initialise breadth
        long double area;                                   // initialise area

        printf("\nEnter the length of the rectangle: ");    // statement for length
        scanf("%Lf", &length);                              // read length

        printf("\nEnter the breadth of the rectangle: ");   // statement for breadth
        scanf("%Lf", &breadth);                             // read length

        area = length * breadth;                            // area calculation

        printf("\nArea of the rectangle is: %Lf\n", area);  // print area
      }

      if (letter == 'T' || letter == 't')                   // if case for triangle
      {
        long double base;                                   // initialise base
        long double height;                                 // initialise height

        long double area;                                   // initialise area

        printf("\nEnter the base: ");                       // statement for base
        scanf("%Lf", &base);                                // read base

        printf("\nEnter the height: ");                     // statement for height
        scanf("%Lf", &height);                              // read height

        area = 0.5 * base * height;                         // area calculation

        printf("\nArea of the triangle is: %Lf\n", area);   // print area
      }

      bool isStart = true;                                  // initialise isStart

      while(isStart)                                        // while loop for isStart
      {
        printf("\nContinue (y/n)?: ");                      // statement for isContinued
        scanf("%s", &isContinued);                          // read isContinued

        switch(isContinued)                                 // switch case for isContinued
        {
          case 'Y':                                         // capital Y for yes
          case 'y':                                         // small y for yes

          case 'N':                                         // capital N for no
          case 'n':                                         // small n for no

          isStart = false;                                  // to break out of the while loop
          break;                                            // break out of the switch case

          default:                                          // invalid input case
          printf("Invalid Input");                          // text
        }
      }

      if (isContinued == 'n' || isContinued == 'N')         // if condition for no
      {
        break;                                              // break out of the main while loop
      }
    }  
    if (isContinued == 'n' || isContinued == 'N')           // if condition for no
    {
      printf("Thank You!\n");                               // print Thank you
      break;                                                // break out of do while loop
    }
  } while (isContinued == 'Y' || isContinued == 'y');       // while condition for do while loop

  return 0;                                                 // return integer 0
}                                                           // end of main()