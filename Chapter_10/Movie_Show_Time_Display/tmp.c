#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char title[55];
    char rating[10];
    char time[10];
} Listing;

//-------------GET LINES
int getLines(FILE* file) {
    int count = 0;
    while(!feof(file)) {
        char getchar = fgetc(file);
        if(getchar == '\n') count++;
    }
    rewind(file);
    return ++count;
}

//------------GETTING LISTINGS (MULTIPLE FUNCTIONS)
Listing* getListingsArray(FILE* file, int numListings, int LINE_LIMIT, int MAX_TITLE_CHARS, char* line) {
    Listing* listingArray = (Listing*)(malloc(sizeof(Listing)*(numListings)));
    int i;
    //if (listingArray == NULL) printf("Unable to allocate memory");
    for (i = 0; i < numListings; i++) {
        Listing curListing;
        fgets(line, LINE_LIMIT+50, file);
        sscanf(line, "%[^,],%44[^,],%[^\n]\n", curListing.time, curListing.title, curListing.rating);
        listingArray[i] = curListing;
    }
    rewind(file);
    return listingArray;
}

// print the structs pass array index listing into the function
void printLine(char* stringToChange, Listing listing, int LINE_MAX) { 
    char tocat[LINE_MAX];
    sprintf(tocat, "%-45s| %5s |", listing.title, listing.rating);
    strcat(stringToChange, tocat);
}

void getTimes (char* returnString, Listing listing, FILE* file, int numListings, int MAX_LINE, char* line) {
    int i;
    char toPrint[100];
    for (i = 0; i < numListings; i++) {
        char checkTime[50];
        char toCompareName[MAX_LINE];
        fgets(line, MAX_LINE, file);
        sscanf(line, "%[^,],%[^,]", checkTime, toCompareName);
        if(strcmp(toCompareName, listing.title) == 0) {
            sprintf(toPrint, " %s", checkTime);
            strcat(returnString, toPrint);
        }
    }
}



int main(void) {
    const int MAX_TITLE_CHARS = 44;  // Maximum length of movie titles
    const int LINE_LIMIT = 100;   // Maximum length of each line in the text file
    char line[LINE_LIMIT+100];
    char inputFileName[25];
    
    /* Type your code here. */
    scanf("%s", inputFileName);
    FILE* file = fopen(inputFileName, "r");
    int numLines = getLines(file);
    Listing* listingArr = getListingsArray(file, numLines, LINE_LIMIT, MAX_TITLE_CHARS, line);

    /*while(!feof(file)) {

    }
    return 0;
}