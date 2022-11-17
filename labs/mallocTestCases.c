#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int *mall = (int*)malloc(20 * sizeof(int));
    printf("%lu", sizeof(char[5][5]));
    free(mall);
    return 0;
}