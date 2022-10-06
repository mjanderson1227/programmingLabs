#include <stdio.h>
#include <string.h>

#include "Student.h"
#include "Course.h"

int main() {
	Course course = InitCourse();

    Student student1 = InitStudent("Henry", "Nguyen", 3.5);
    Student student2 = InitStudent("Brenda", "Stern", 2.0);
    Student student3 = InitStudent("Lynda", "Robinson", 3.2);
    Student student4 = InitStudent("Sonya", "King", 3.9);

    course = AddStudent(student1, course);
    course = AddStudent(student2, course);
    course = AddStudent(student3, course);
    course = AddStudent(student4, course);

    Student student = FindStudentHighestGPA(course);

    printf("Top student: %s %s (GPA: %.1lf)\n", student.first, student.last, student.gpa);

	return 0;
}