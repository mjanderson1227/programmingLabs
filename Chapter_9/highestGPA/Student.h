#ifndef STUDENT_H_
#define STUDENT_H_

typedef struct Student_struct {
	char first[20];
	char last[20];
	double gpa;
} Student;

Student InitStudent(char *first, char *last, double gpa);
void GetLastName(char *studentName, Student student);
double GetGPA(Student student);

#endif