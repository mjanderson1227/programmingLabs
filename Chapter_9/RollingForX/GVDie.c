#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "GVDie.h"

GVDie InitGVDie() {
    GVDie die;
    die.seed = 1;
    srand(die.seed);
    
    die.myValue = rand() % 6 + 1;
    
    return die;
}

GVDie Roll(GVDie die) {
    die.myValue = rand() % 6 + 1;
    
    return die;
}

int GetValue(GVDie die) {
    return die.myValue;
}

GVDie SetSeed(int seed, GVDie die) {
    die.seed = seed;
    srand(seed);
    return die;
}