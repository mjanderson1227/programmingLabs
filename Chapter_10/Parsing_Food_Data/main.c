#include <stdio.h>
#include <string.h>

int main(void) {
    const int MAX_LINES = 25;   // Maximum number of lines in the input text file
    const int MAX_STRING_LENGTH = 100;  // Maximum number of characters in each column of the input text file
    const int MAX_LINE_LENGTH = 200;  // Maximum number of characters in each line of the input text file 
    
    // Declare 4 string arrays to store the 4 columns from the input text file
    char column1[MAX_LINES][MAX_STRING_LENGTH];
    char column2[MAX_LINES][MAX_STRING_LENGTH];
    char column3[MAX_LINES][MAX_STRING_LENGTH];
    char column4[MAX_LINES][MAX_STRING_LENGTH];
    
    /* Type your code here. */
    int count = 0;
    char input[20];
    scanf("%s", input);
    int i = 0;
    FILE* file = fopen(input, "r");

    while(1) {
        char buffer[MAX_LINE_LENGTH];
        if(fgets(buffer, MAX_LINE_LENGTH, file) == NULL) {
            break;
        }
        count++;
    }

    rewind(file);

    for (i = 0; i < count; i++) {
        char buffer[MAX_LINE_LENGTH];
        fgets(buffer, MAX_LINE_LENGTH, file);
        sscanf(buffer, "%[^\t]\t%[^\t]\t%[^\t]\t%[^\t]", column1[i], column2[i], column3[i], column4[i]);
    }

    for (i = 0; i < count; i++) {
        if(strstr(column4[i], "Not available") == NULL) {
            printf("%s (%s) -- %s\n", column2[i], column1[i], column3[i]);
        }
    }
}
