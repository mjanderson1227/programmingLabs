#include <stdio.h>
#include <string.h>

int GetMonthAsInt(char *monthString)
{
    int monthInt;

    if (strcmp(monthString, "January") == 0)
    {
        monthInt = 1;
    }
    else if (strcmp(monthString, "February") == 0)
    {
        monthInt = 2;
    }
    else if (strcmp(monthString, "March") == 0)
    {
        monthInt = 3;
    }
    else if (strcmp(monthString, "April") == 0)
    {
        monthInt = 4;
    }
    else if (strcmp(monthString, "May") == 0)
    {
        monthInt = 5;
    }
    else if (strcmp(monthString, "June") == 0)
    {
        monthInt = 6;
    }
    else if (strcmp(monthString, "July") == 0)
    {
        monthInt = 7;
    }
    else if (strcmp(monthString, "August") == 0)
    {
        monthInt = 8;
    }
    else if (strcmp(monthString, "September") == 0)
    {
        monthInt = 9;
    }
    else if (strcmp(monthString, "October") == 0)
    {
        monthInt = 10;
    }
    else if (strcmp(monthString, "November") == 0)
    {
        monthInt = 11;
    }
    else if (strcmp(monthString, "December") == 0)
    {
        monthInt = 12;
    }
    else
    {
        monthInt = 0;
    }

    return monthInt;
}

int main()
{

    // TODO: Read dates from input, parse the dates to find the ones
    //       in the correct format, and output in m/d/yyyy format
    char string[150];
    string[0] = '\0';
    while(1) {
        char month[10];
        int day;
        int year;
        //get line into buffer
        char buffer[20];
        fgets(buffer, 20, stdin);
        //check the buffer
        if(strstr(buffer, "-1") != NULL) break; //checks if the line is -1

        if(sscanf(buffer, "%s %d, %d\n", month, &day, &year)==3) {
            char toAdd[9];
            sprintf(toAdd, "%d/%d/%d\n", GetMonthAsInt(month), day, year);
            strcat(string, toAdd);
        }
    }
    printf("%s", string);
    return 0;
}