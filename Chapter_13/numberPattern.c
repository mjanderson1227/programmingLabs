#include <stdio.h>

/*
Write a recursive function called PrintNumPattern() to output the following number pattern.

Given a positive integer as input (Ex: 12), subtract another positive integer (Ex: 3) continually until a negative value is reached, and then continually add the second integer until the first integer is again reached. For this lab, do not end output with a newline.
*/


void PrintNumPattern(int num1, int num2)
{
    printf("%d ", num1);

    if (num1>=0)
        PrintNumPattern(num1-num2, num2);
    else
        return;

    printf("%d ", num1);
}

int main(void) {
    int num1;
    int num2;
    
    scanf("%d", &num1);
    scanf("%d", &num2);

    PrintNumPattern(num1, num2);
}
