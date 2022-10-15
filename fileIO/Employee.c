#include "Employee.h"

Employee* readData(char* fileName, int* size) {
    printf("bruh");
    FILE* file = fopen(fileName, "r");
    int numLines = 0;
    while(1) {
        if (fgetc(file)=='\n') {
            numLines++;
        }
        if (fgetc(file)==EOF){
            break;
        }
        file = file+1;
    }
    printf("numLines: %d", numLines);
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
        sscanf("%s %d %lf", curEmployee.name, curEmployee.id, curEmployee.salary);
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
            printf("%s", curBest.name);
        }
    }
    return curBest;
}

void writeData(char* outputFile, Employee bestEmployee) {
    FILE* output = fopen(outputFile, "w");
    fprintf (output, "%s %d %.0lf", bestEmployee.name, bestEmployee.id, bestEmployee.salary);
    fclose(output);
}
