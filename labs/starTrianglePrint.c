#include <stdio.h>
#include <stdarg.h>

int main(int argc, char* argv[])
{
    int i, j, k, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
