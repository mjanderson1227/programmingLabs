#include "employee.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int numEmployees;
    Employee* myEmployeeArr = readData("a6-input.txt", &numEmployees);
    Employee bestEmployee = getBestEmployee(myEmployeeArr, numEmployees);
    writeData("a6-output.txt", bestEmployee);
    free(myEmployeeArr);
    return 0;
}