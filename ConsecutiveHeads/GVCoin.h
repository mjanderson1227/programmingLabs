#ifndef GVCOIN_H_
#define GVCOIN_H_

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

typedef struct GVCoin_struct {
	bool isHeads;
    int flips;
    int heads;
} GVCoin;

GVCoin InitGVCoin(int seed);
GVCoin Flip(GVCoin coin);
int NumFlips(GVCoin coin);
int NumHeads(GVCoin coin);
int NumTails(GVCoin coin);
bool IsHeads(GVCoin coin);

#endif