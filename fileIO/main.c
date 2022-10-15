#include "Employee.h"

int main(int argc, char* argv[]) {
    int numEmployees;
    printf("a1");
    Employee* myEmployeeArr = readData("a-6input.txt", &numEmployees);
    printf("b1");
    Employee bestEmployee = getBestEmployee(myEmployeeArr, numEmployees);
    printf("c1");
    writeData("a6-output.txt", bestEmployee);
    printf("d1");
    //free(myEmployeeArr);
    return 0;
}