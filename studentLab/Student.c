#include "Student.h"

Student InitStudent()
{
    Student s;
    strcpy(s.name, "Louie");
    s.GPA = 1.0;
    return s;
}

Student SetName(char *name, Student s)
{
    strcpy(s.name, name);
    return s;
}

Student SetGPA(double gpa, Student s)
{
    s.GPA = gpa;
    return s;
}

void GetName(char* studentName, Student s)
{
    strcpy(studentName, s.name);
}

double GetGPA(Student s)
{
    return s.GPA;
}