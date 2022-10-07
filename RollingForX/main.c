#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "GVDie.h"

int RollSpecificNumber(GVDie die, int num, int goal) {
    int numFlips = 0;
    int total = 0;
    while(total < goal) {
        die = Roll(die);
        if(GetValue(die) == num) {
            total++;
            numFlips++;
        }
        else {
            numFlips++;
        }
    }
    return numFlips;
}

int main() {
    GVDie die = InitGVDie(); // Create a GVDie variable
    die = SetSeed(15, die); // Set the GVDie variable with seed value 15
    int num;
    int goal;
    int rolls;
    scanf("%d", &num);
    scanf("%d", &goal);
    rolls = RollSpecificNumber(die, num, goal);  // Should return the number of rolls to reach total.
    printf("It took %d rolls to get a \"%d\" %d times.\n", rolls, num, goal);

    return 0;
}