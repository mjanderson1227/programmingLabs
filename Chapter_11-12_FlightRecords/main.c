#include "flights.h"

// 1 Parameter will be passed in: arg1-CSV_File
int main(int argc, char *argv[])
{
    FILE *file = NULL;
    char userinp[3];
    int totalPassengers = 0;
    int totalFlights = 0;
    int i;
    // Error Handling
    if (argc == 1)
    {
        printf("ERROR NO ARGS");
        return 1;
    }
    // Open File for reading
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("ERROR FILE NOT OPEN");
        return -1;
    }
    // Creating an array of flights to hold the CSV INFO
    Flight *flightArray = (Flight *)malloc(sizeof(Flight) * NUM_FLIGHTS);
    int curIndex = 0;
    while (!feof(file))
    {
        fscanf(
            file,
            "%3s,%3s,%2s,%d\n",
            flightArray[curIndex].origin,
            flightArray[curIndex].destination,
            flightArray[curIndex].airline,
            &flightArray[curIndex].passengers);
        curIndex++;
    }
    fscanf(stdin, "%2s", userinp);
    for (i = 0; i < NUM_FLIGHTS; i++)
    {
        if (strcmp(flightArray[i].airline, userinp) == 0)
        {
            // bug if statement is not executing.
            totalFlights++;
            totalPassengers += flightArray[i].passengers;
        }
    }
    printf(
        "airline: %s\nflights: %d\npassengers: %d\n",
        userinp,
        totalFlights,
        totalPassengers);
    return 0;
}