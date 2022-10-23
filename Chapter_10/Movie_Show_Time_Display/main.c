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
    //FILE* beginning = fopen(inputFileName, "r");
    char outputString[500];
    outputString[0] = '\0';
    int count = 0;
    while(1) {
        if(file == NULL) {
            printf("File Not Found.\n");
            break;
        }
        char toCat[250];
        toCat[0] = '\0';
        char title[MAX_TITLE_CHARS];
        char rating[6];
        char time[6];
        //if at end then break the inf loop
        if(fgets(line, LINE_LIMIT, file) == NULL) {
            break;
        }
        sscanf(line, "%[^,],%44[^,],%[^\n]\n", time, title, rating);
        // Formatting the file into the desired output
        if(strstr(outputString, title) != NULL ) { // if name is the same.
            //check the output string already contains the movie.  If so, the loop continues.
            continue;
        }
        sprintf(toCat, "%-45s | %5s | %s\n", title, rating, time);
        strcat(outputString, toCat);
        count++;
    }
    return 0;
}