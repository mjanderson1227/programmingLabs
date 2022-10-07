#ifndef GVDIE_H
#define GVDIE_H

typedef struct GVDie_struct {
    int myValue; 
    int seed;
} GVDie;

GVDie InitGVDie();
GVDie Roll(GVDie die);
int GetValue(GVDie die);
GVDie SetSeed(int seed, GVDie die);

#endif