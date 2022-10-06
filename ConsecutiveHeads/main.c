#include <stdio.h>

#include "GVCoin.h"



int ConsecutiveHeads(GVCoin coin, int goal) 
{
    int noTails = 0;
    while (noTails < goal)
    {
        coin = Flip(coin);
        if(IsHeads(coin))
        {
            noTails++;
        }
        else
        {
            noTails = 0;
        }
    }
    return NumFlips(coin);
}


int main() {

    GVCoin coin = InitGVCoin(15); //calls seed and creates coin
	int numHeads = 5; //number of heads to flip
	int flips = ConsecutiveHeads(coin, numHeads); //flips coin until 5 heads
	printf("Total number of flips for 5 consecutive heads: %d\n", flips); 
	return 0;
}