// CGPA Grade Card Generator coded by Khair Alanam on 22/01/2022

#include <stdio.h>                                                                   // import stdio.h library                    

int main()                                                                           // start of main() function
{
  printf("][][][][][][][][][][][][][][][][][][][\n");                                // decorative characters
  printf("\v Welcome to CGPA Grade Card Generator\n");                               // heading of the program
  printf("\v][][][][][][][][][][][][][][][][][][][\n");                              // decorative characters

  unsigned int course_1, course_2, course_3;                                         // initialise course_1, course_2, course_3
  unsigned int course_4, course_5, course_6;                                         // initialise course_4, course_5, course_6

  printf("\v][][][][][][][][][][][][][][][][][][][\n");                              // decorative characters
  printf("][][][][][][]Instructions[][][][][][][\n");                                // heading for instructions
  printf("][][][][][][][][][][][][][][][][][][][\n");                                // decorative characters
  printf("\v1. Marks entered should be out of 100.\n");                              // instruction 1
  printf("2. If fractional marks, round them to the nearest integer.\n");            // instruction 2
  printf("3. Make sure the details entered are correct.\n\v");                       // instruction 3
  printf("][][][][][][][][][][][][][][][][][][][\n\v");                              // decorative characters
  
  ///////////////////////////////////////////////////////////

  printf("Enter the marks for the Course-1 (4 credits): ");                          // statement for course_1
  scanf("%u", &course_1);                                                            // reading course_1 input

  printf("Enter the marks for the Course-2 (4 credits): ");                          // statement for course_2
  scanf("%u", &course_2);                                                            // reading course_2 input

  printf("Enter the marks for the Course-3 (3 credits): ");                          // statement for course_3
  scanf("%u", &course_3);                                                            // reading course_3 input

  printf("Enter the marks for the Course-4 (3 credits): ");                          // statement for course_4
  scanf("%u", &course_4);                                                            // reading course_4 input

  printf("Enter the marks for the Course-5 (3 credits): ");                          // statement for course_5 
  scanf("%u", &course_5);                                                            // reading course_5 input

  printf("Enter the marks for the Course-6 (2 credits): ");                          // statement for course_6
  scanf("%u", &course_6);                                                            // reading course_6 input

  ///////////////////////////////////////////////////////////

  unsigned int course_list[6] = {course_1, course_2, course_3,                       // initialise course_list
  course_4, course_5, course_6};

  unsigned int course_1_grade, course_2_grade, course_3_grade;                       // initialise variables for course grades
  unsigned int course_4_grade, course_5_grade, course_6_grade;                       // initialise variables for course grades
  unsigned int course_grade_list[7] = {course_1_grade, course_2_grade,               // initialise course_grades_list
  course_3_grade, course_4_grade, course_5_grade, course_6_grade}; 

  for (int i = 0; i < 7; i++)                                                        // for loop for assigning grades
  {
    if (90 <= course_list[i])                                                        // if course marks >= 90
    {
      course_grade_list[i] = 10;                                                     // assign 10 grade points
    }

    else if (80 <= course_list[i])                                                   // else if course marks >= 80
    {
      course_grade_list[i] = 9;                                                      // assign 9 grade points
    }

    else if (70 <= course_list[i])                                                   // else if course marks >= 70
    {
      course_grade_list[i] = 8;                                                      // assign 8 grade points
    }

    else if (60 <= course_list[i])                                                   // else if course marks >= 60
    {
      course_grade_list[i] = 7;                                                      // assign 7 grade points
    }

    else if (50 <= course_list[i])                                                   // else if course marks >= 50
    {
      course_grade_list[i] = 6;                                                      // assign 6 grade points
    }

    else if (35 <= course_list[i])                                                   // else if course marks >= 35
    {
      course_grade_list[i] = 5;                                                      // assign 5 grade points
    }

    else                                                                             // if the course marks < 34
    {
      course_grade_list[i] = 2;                                                      // assign 2 grade points
    }
  }

  ///////////////////////////////////////////////////////////

  unsigned int credit_list[7] = {4, 4, 3, 3, 3, 2};                                  // initialise credit_list

  unsigned int total_marks = 0;                                                      // initialise total_marks

  for (int i = 0; i < 7; i++)                                                        // for loop for total_marks calculation
  {
    total_marks += credit_list[i] * course_grade_list[i];                            // total_marks calculation
  }

  ///////////////////////////////////////////////////////////
  
  unsigned int cgpa;                                                                 // initialise cgpa
  cgpa = (unsigned int) total_marks / 19;                                            // cgpa calculation

  char* cgpa_grade;                                                                  // initialise cgpa_grade

  if (cgpa == 10)                                                                    // if cgpa is 10
  {
    cgpa_grade = "Ex";                                                               // assign Ex grade
  }
  
  else if (cgpa == 9)                                                                // if cgpa is 9
  {
    cgpa_grade = "A";                                                                // assign A grade
  }
  
  else if (cgpa == 8)                                                                // if cgpa is 8
  {
    cgpa_grade = "B";                                                                // assign B grade
  }

  else if (cgpa == 7)                                                                // if cgpa is 7
  {
    cgpa_grade = "C";                                                                // assign C grade
  }

  else if (cgpa == 6)                                                                // if cgpa is 6
  {
    cgpa_grade = "D";                                                                // assign D grade
  }

  else if (cgpa == 5 || cgpa == 4 || cgpa == 3)                                      // if cgpa is 3 or 4 or 5
  {
    cgpa_grade = "P";                                                                // assign P grade
  }

  else                                                                               // if cgpa <= 2
  {
    cgpa_grade = "F";                                                                // assign F grade
  }

  ///////////////////////////////////////////////////////////

  printf("\v{__________________________________________}\n");                        // decorative characters
  printf("{___________Your CGPA Grade Card___________}\n");                          // heading for Grade Card
  printf("{__________________________________________}\n\v");                        // decorative characters

  printf(" Course-1 marks: %u\n", course_1);                                         // course_1 marks
  printf(" Course-2 marks: %u\n", course_2);                                         // course_2 marks
  printf(" Course-3 marks: %u\n", course_3);                                         // course_3 marks
  printf(" Course-4 marks: %u\n", course_4);                                         // course_4 marks
  printf(" Course-5 marks: %u\n", course_5);                                         // course_5 marks
  printf(" Course-6 marks: %u\n\v", course_6);                                       // course_6 marks

  printf("Your CGPA Score: %u\n\v", cgpa);                                           // CGPA Score
  printf("Your CGPA Grade: %s\n\v", cgpa_grade);                                     // CGPA Grade

  printf("Yay! Congratulations! You got %s grade!\n\v", cgpa_grade);                 // Congratulatory statement

  printf("{__________________________________________}\n");                          // decorative text
  printf("{________________Thank you!________________}\n");                          // Thank you statement
  printf("{__________________________________________}\n");                          // decorative text

  return 0;                                                                          // return integer 0
}                                                                                    // end of main() function