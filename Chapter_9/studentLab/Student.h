#define STUDENT_H
#include <string.h>

typedef struct Student {
    char name[20];
    double GPA;
} Student;

Student InitStudent();

Student SetName(char *, Student);

Student SetGPA(double, Student);

void GetName(char*, Student);

double GetGPA(Student);


