#include <stdio.h>
#include <string.h>

#include "Student.h"
#include "Course.h"

int main() {
	Course course = InitCourse();

    Student student1 = InitStudent("Henry", "Cabot", 3.5);
    Student student2 = InitStudent("Brenda", "Stern", 2.0);
    Student student3 = InitStudent("Jane", "Flynn", 3.9);
    Student student4 = InitStudent("Lynda", "Robison", 3.2);

    course = AddStudent(student1, course);
    course = AddStudent(student2, course);
    course = AddStudent(student3, course);
    course = AddStudent(student4, course);

    PrintRoster(course);

	return 0;
}