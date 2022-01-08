/* Program to Read and Print your name,
Roll number, Dept, Semester and total credits 
registered coded by Khair Alanam on Jan 2 2022 */

#include <stdio.h>                                                                               // importing <stdio.h> library

int main()                                                                                       // start of the main() function
{
  char student_name[60], dept_name[10], roll_number[20];                                         // initialising str variables student_name, dept_name and roll_number
  short int semester_number, total_credits;                                                      // initialising short int variables semester_number and total_credits

  printf("Enter your name (Eg: \"John Doe\"): ");                                                // asking for student_name input
  gets(student_name);                                                                            // reads student_name from keyboard
  printf("The entered name is: ");                                                               // waiting for the student_name to be printed
  puts(student_name);                                                                            // prints student_name

  printf("\nEnter your roll number (Eg: \"123AB4567\"): ");                                      // asking for roll_number input
  gets(roll_number);                                                                             // reads roll_number from keyboard
  printf("The entered roll number is: ");                                                        // waiting for the roll_number to be printed
  puts(roll_number);                                                                             // prints roll_number

  printf("\nEnter your department (Eg: CS, MM, ME, CE, CR, etc): ");                             // asking for dept_name input
  gets(dept_name);                                                                               // reads dept_name from keyboard
  printf("The entered department is: ");                                                         // waiting for the dept_name to be printed
  puts(dept_name);                                                                               // prints dept_name

  printf("\nEnter your semester (1-8): ");                                                       // waiting for the semester_number input
  scanf("%hd", &semester_number);                                                                // reads semester_number from keyboard
  printf("The entered semester number is: %hd \n", semester_number);                             // prints semester_number

  printf("\nEnter the total credits registered: ");                                              // waiting for the total_credits input
  scanf("%hd", &total_credits);                                                                  // reads total_credits from keyboard
  printf("The total number of credits registered is: %hd \n\v", total_credits);                  // prints total_credits

  printf("|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| \n");                                          // decorated lines
  printf("| | | | | | | | | | | | | | | | | | | | \n");                                          // decorated lines
  printf("| | | | | | | | | | | | | | | | | | | | \n");                                          // decorated lines
  printf("| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_\n\v");                                        // decorated lines
  printf("           The Student Summary            \n\v");                                      // student summary title
  printf("Name of the student: %s \n", student_name);                                            // student name
  printf("Roll number: %s \n", roll_number);                                                     // roll number
  printf("Name of the Department: %s \n", dept_name);                                            // department name
  printf("The current semester: %hd \n", semester_number);                                       // current semester
  printf("The total number of credits registered: %hd \n\v", total_credits);                     // total number of credits
  printf("|_| |_| |_| |_| |_| |_| |_| |_| |_| |_| \n");                                          // decorated lines
  printf("| | | | | | | | | | | | | | | | | | | | \n");                                          // decorated lines
  printf("| | | | | | | | | | | | | | | | | | | | \n");                                          // decorated lines
  printf("| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_\n");                                          // decorated lines
  return 0;                                                                                      // returns integer 0
}                                                                                                // end of the main() function