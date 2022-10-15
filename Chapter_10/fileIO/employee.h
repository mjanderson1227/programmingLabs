//Header Guard
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
//include statements
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//Employee Struct
typedef struct {
char name[10];
    int id;
    double salary;
} Employee;
//Function Prototypes

/*
1.  readData: (Allocate the memory for the employee array here.)
    --Input Parameters:
            (FILE*) fileName - The input file that will be read.
            (int*) size - a pointer to an integer passed by reference to define the size of the returned array.
    --Return Type:
            A pointer to a dynamically allocated array of employee structs.
*/
Employee* readData(char*, int*);

/*
2.  getBestEmployee:
    --Input Parameters:
            (Employee*) employeeArray - pointer to the employee array created above.
            (int) arraySize - the size of the created employee array.
    --Return Type:
            returns an employee struct of the employee with the highest salary.
*/
Employee getBestEmployee(Employee*, int);

/*
3.  writeData()
    --Input Parameters:
            (FILE*) outputFile - The name of the file that the function should write the output in.
            (Employee) bestEmployee - The struct of the best employee returned in the previous function.
    --Output Parameters:
            (void) : NONE WRITE THE FILE.
*/
void writeData(char*, Employee);

#endif