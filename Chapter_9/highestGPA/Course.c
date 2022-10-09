#include <stdio.h>
#include <string.h>

#include "Course.h"
#include "Student.h"

Course InitCourse() {
	Course course;
	course.numStudents = 0;
	return course;
}

Student FindStudentHighestGPA(Course course) {
    int i;
    double maxGPA = 0;
    Student maxStudent;
    Student curstudent;
    
    for (i = 0; i < course.numStudents; i++)
    {
        curstudent = course.roster[i];
        if(curstudent.gpa > maxGPA)
        {
            maxGPA = curstudent.gpa;
            maxStudent = curstudent;
        }
    }
    return maxStudent;
}

Course AddStudent(Student student, Course course) {
	course.roster[course.numStudents].gpa = student.gpa;
	strcpy(course.roster[course.numStudents].last, student.last);
	strcpy(course.roster[course.numStudents].first, student.first);
	course.numStudents++;
	return course;
}