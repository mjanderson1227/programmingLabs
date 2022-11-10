#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* ReverseString(char* stringToReverse) 
{   
    static int i;
    static int flag;
    static char* returnStr = NULL;

    if (flag == 0)
    {
        flag++;
        returnStr = realloc(returnStr, sizeof(stringToReverse));
    }
    
    if(*stringToReverse == '\0')
    {
        return returnStr;
    }

    returnStr = ReverseString(stringToReverse+1);
    returnStr[i] = stringToReverse[0];
    i++;

    return returnStr;
}

int main(void) {
    char inStr[50];
    char* resultStr;
    char* returnStr;
    fgets(inStr, 20, stdin);
    strtok(inStr, "\n");  // Remove newline character from input.
    char* allocatedMem = malloc(sizeof(inStr));
    resultStr = ReverseString(inStr);
    printf("Reversed: %s\n", resultStr);
    free(returnStr);
    return 0;
}
