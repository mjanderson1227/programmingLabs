#include "employee.h"

Employee* readData(char* fileName, int* size) {
    FILE* file = fopen(fileName, "r");
    int numLines = 1;
    while(1) {
        //char buffer[30];
        char curChar = fgetc(file);
        if(curChar == EOF) { 
            break;
        }
        if(curChar == '\n') {
        numLines++;
        }
    }
    *size = numLines;
    Employee* employeeArr = (Employee*)(malloc(sizeof(Employee)*numLines));
    rewind(file);
    //2nd half of the function.
    //---------------------- //
    int i;
    for(i = 0; i < numLines; i++){
        Employee curEmployee;
        char buffer[20];
        fgets(buffer, 20, file);
        sscanf(buffer, "%s %d %lf", curEmployee.name, &curEmployee.id, &curEmployee.salary);
        employeeArr[i] = curEmployee;
    }
    fclose(file);
    return employeeArr;
}

Employee getBestEmployee(Employee* employeeArray, int arraySize) {
    int i;
    Employee curBest = employeeArray[0];
    for(i = 1; i < arraySize; i++) {
        if (employeeArray[i].salary > curBest.salary) {
            curBest = employeeArray[i];
        }
    }
    return curBest;
}

void writeData(char* outputFile, Employee bestEmployee) {
    FILE* output = fopen(outputFile, "w");
    fprintf (output, "%s %d %.0lf", bestEmployee.name, bestEmployee.id, bestEmployee.salary);
    fclose(output);
}
