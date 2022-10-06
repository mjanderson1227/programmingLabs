#include "point.h"

void midpoint(point p1, point p2, point* pptr)
{
    double newX;
    double newY;
    double newZ;
    newX = (p1.x+p2.x)/2.0;
    newY = (p1.y+p2.y)/2.0;
    newZ = (p1.z+p2.z)/2.0;
    pptr -> x = newX;
    pptr -> y = newY;
    pptr -> z = newZ;
}

void distance(point p1, point p2, double* distance)
{
    *distance = sqrt( pow(( p2.x - p1.x ), 2.0) + pow(( p2.y - p1.y ), 2.0) + pow(( p2.z - p1.z ), 2.0) );
}

void getVals (point* inp)
{
    scanf("%lf", &inp->x);
    scanf("%lf", &inp->y);
    scanf("%lf", &inp ->z);
}

void printVals (point inp, double dist)
{
    printf("midpoint: %0.2lf, %0.2lf, %0.2lf\ndistance: %0.2lf\n", inp.x, inp.y, inp.z, dist);
}

