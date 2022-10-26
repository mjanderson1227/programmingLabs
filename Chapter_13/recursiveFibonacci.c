#include <stdio.h>
#include <stdlib.h>

//Recursive Function
int Fibonacci(int n) {
    if(n<=1) {
        if (n<0) {
            n = -1;
        }
        return n;
    }
    return (Fibonacci(n-1)+Fibonacci(n-2));
}

int main() {
    int startNum;

    scanf("%d", &startNum);
    printf("Fibonacci(%d) is %d\n", startNum, Fibonacci(startNum));

    return 0;
}