#ifndef FLIGHTS_H
#define FLIGHTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FLIGHTS 200

// Struct for the flights to be used.
typedef struct flights
{
    char origin[4];
    char destination[4];
    char airline[3];
    int passengers;
} Flight;

#endif