#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int MAX_TITLE_CHARS = 44;  // Maximum length of movie titles
    const int LINE_LIMIT = 100;   // Maximum length of each line in the text file
    char line[LINE_LIMIT];
    char inputFileName[25];
    
    // Prompt user for input file name
    scanf("%s", inputFileName);
    // Begin reading the CSV file
    FILE* file = fopen(inputFileName, "r");
    char outputString[250];
    outputString[0] = '\0';
    while(1) {
        if(file == NULL) {
            printf("File Not Found.\n");
            break;
        }
        char title[MAX_TITLE_CHARS];
        char rating[6];
        char time[6];
        //if at end then break the inf loop
        if(fgets(line, LINE_LIMIT, file) == NULL) {
            break;
        }
        sscanf(line, "%[^,],%44[^,],%[^\n]", time, title, rating);
        // Formatting the file into the desired output
        if(strstr(outputString, title) !=0 ){
            strcat(outputString, title)
        }
    }

    return 0;
}