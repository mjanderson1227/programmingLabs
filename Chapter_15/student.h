//Header guard
#ifndef STUDENT_H
#define STUDENT_H


//Including Libraries
#include <stdio.h>
#include <stdlib.h>


//Declare struct of students.
typedef struct Students
{
    int id;
    char name[20];
} 
Student;


//Gets the number of lines in the CSV file.
int getLines( FILE* );


//Memory Allocation of the array of students based on the number of lines in the file
Student* makeArray( FILE*, int );


//Will sort students by increasing order of ID - USING INSERTION SORT
void sortStudents( Student*, int );


//Traverses the array and prints all the students in the format (id,name)
void print( Student*, int );


//BINARY SEARCH that searches the array of students for the given key
Student searchStudent( Student*, int, int );


#endif