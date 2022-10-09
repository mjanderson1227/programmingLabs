#ifndef COURSE_H_
#define COURSE_H_

#include "Student.h"

typedef struct Course_struct {
	Student roster[20];
	int numStudents;
} Course;

Course InitCourse();

Course AddStudent(Student student, Course course);

void PrintRoster(Course course);


#endif