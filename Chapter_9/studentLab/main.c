/*
Given main(), build a struct called Student that represents a student that has two data members: 
`the student's name (string) and the student's GPA (double). 
Assume student's name has a maximum length of 20 characters.

Implement the Student struct and related function declarations in Student.h, and implement the related function definitions in Student.c as listed below:

Student InitStudent() - initializes name to "Louie" and gpa to 1.0
Student SetName(char *name, Student s) - sets the student's name
Student SetGPA(double gpa, Student s) - sets the student's GPA
void GetName(char* studentName, Student s) - return the student's name in studentName
double GetGPA(Student s) - returns the students GPA
Ex. If a new Student object is created, the default output is:

Louie/1.0

Ex. If the student's name is set to "Felix" and the GPA is set to 3.7, the output becomes:

Felix/3.7*/


#include <stdio.h>
#include <string.h>

#include "Student.h"

int main() {
    Student student = InitStudent();
    char name[20];
    
    GetName(name, student);
    printf("%s/%.1lf\n", name, GetGPA(student));

    student = SetName("Felix", student);
    student = SetGPA(3.7, student);
    GetName(name, student);
    printf("%s/%.1lf\n", name, GetGPA(student));

	return 0;
}