#ifndef COURSE_H_
#define COURSE_H_

#include "Student.h"

typedef struct Course_struct {
	Student roster[20];
	int numStudents;
} Course;

Course InitCourse();
Student FindStudentHighestGPA(Course course);
Course AddStudent(Student student, Course course);

#endif