#include <stdio.h>

int DigitCount(num)
{   
    static int digits = 0;
    if ((num == 0) && (digits == 0))
    {
        digits++;
        return digits;
    }
    if (num!=0)
    {
        digits++;
        DigitCount(num/10);
    }
    return digits;
}

int main(void) {
    int num;
    int digits;

    scanf("%d", &num); 
    digits = DigitCount(num);
    printf("%d", digits);
    return 0;
}