#include "point.h"

int main(int argc, char* argv[])
{
    point A;
    point B;
    double dist;
    point mid;
    getVals(&A);
    getVals(&B);
    midpoint(A, B, &mid);
    distance(A, B, &dist);
    printVals(mid, dist);
}