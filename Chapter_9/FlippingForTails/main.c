#include <stdio.h>
#include "GVCoin.h"

//Only thing that is changed
int FlipForTails(GVCoin coin, int goal) 
{
    while (NumTails(coin) < goal)
    {
        coin = Flip(coin);
    }
    return NumFlips(coin);
}

int main() {
	GVCoin coin = InitGVCoin(15); // Create a GVcoin object with seed value 15
	int numTails = 100;  // Desire 100 tails
	int total = FlipForTails(coin, numTails); // Should return 213 using GVcoin object with seed value 15
	printf("Total number of flips for 100 tails: %d\n", total);

	return 0;
}