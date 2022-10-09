#include <stdio.h>
#include <string.h>

#include "Course.h"
#include "Student.h"

Course InitCourse() {
	Course course;
	course.numStudents = 0;
	return course;
}

void PrintRoster(Course course) {
    int i;
    Student curstudent;
    for(i = 0; i < course.numStudents; i++)
    {
        curstudent = course.roster[i];
        printf("%s %s (GPA: %0.1lf)\n", curstudent.first, curstudent.last, curstudent.gpa);
    }
    printf("Students: %d\n", course.numStudents);
}

Course AddStudent(Student student, Course course) {
	course.roster[course.numStudents].gpa = student.gpa;
	strcpy(course.roster[course.numStudents].last, student.last);
	strcpy(course.roster[course.numStudents].first, student.first);
	course.numStudents++;
	return course;
}