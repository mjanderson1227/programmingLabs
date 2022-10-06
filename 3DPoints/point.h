#ifndef POINT_H_
#define POINT_H_

#include <stdio.h>
#include <math.h>

typedef struct point
{
    double x;
    double y;
    double z;
} point;

void midpoint(point, point, point*);

void distance(point, point, double*);

void getVals(point*);

void printVals(point, double);

#endif