#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    const int MAX_TITLE_CHARS = 44;  // Maximum length of movie titles
    const int LINE_LIMIT = 100;   // Maximum length of each line in the text file
    char line[LINE_LIMIT];
    char inputFileName[25];
    

    scanf("%s", inputFileName);
    //
    FILE* file = fopen(inputFileName, "r");
    FILE* fromHere = fopen(inputFileName, "r");
    //Look here first if error.
    //
    char seen[750];
        seen[0] = '\0';
    //if eof leave loop
    while(!feof(file)) {
        char time[50];
        char title[MAX_TITLE_CHARS];
        char rating[10];
        //get line
        fgets(line, LINE_LIMIT, file);
        //get the values many of them won't be used.
        sscanf(line, "%[^,],%44[^,],%[^\n]\n", time, title, rating);
        //add name to seen stack
        if(strcmp(seen, title)!=0) {
            strcat(seen, title);
        }
        else {
            fseek(fromHere, ftell(file), 0);
            while(!feof(fromHere)) {
                char time2[7];
                //
                fgets(line, LINE_LIMIT, fromHere);
                //
                sscanf(line, "%[^,],%*[^,],%*[^\n]\n", time2);
                //
                if(strcmp(seen, title)==0) {
                    strcat(time, " ");
                    strcat(time, time2);
                }
                
            }
            rewind(fromHere);
            //possible continue.
        }
        printf("%-44s | %5s | %s\n", title, rating, time);
    }
    fclose(file);
    return 0;
}