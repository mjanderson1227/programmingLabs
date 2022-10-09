#include <stdio.h>
#include <string.h>

#include "Student.h"

Student InitStudent(char *first, char *last, double gpa) {
	Student student;
	strcpy(student.first, first);
	strcpy(student.last, last);
	student.gpa = gpa;
	return student;
}

void GetLastName(char *studentName, Student student) {
	strcpy(studentName, student.last);
}

double GetGPA(Student student) {
	return student.gpa;
}