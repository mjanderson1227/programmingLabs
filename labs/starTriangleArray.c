#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> 

int main(int argc, char* argv[])
{
    int i;
    int j;
    int total;
    int size=0;
    printf("Enter the total height of the triangle:\n");
    scanf("%d", &total);
    char** arr1 = (char**)malloc(total * sizeof(char*));
    size = size + (total*sizeof(char));
    for(i=0; i<total; i++)
    {
        arr1[i] = (char*)malloc(total * sizeof(char));
        size = size + (total * sizeof(char));
    }
    
    //For loop that will print the number of stars into the array
    for(i=0; i<total; i++)
    {
        for(j=0; j<total; j++)
        {
            if(j<=i)
            {
                arr1[i][j]= '*';
            }
            else
            {
                arr1[i][j] = ' ';
            }
        }
    }
    //looping back through to print the values
    for(i=0; i<total; i++)
    {
        for(j=0; j<total; j++)
        {
            printf("%c ", arr1[i][j]);
        }
        printf("\n\n");
    }
    printf("%d", size);
    free(arr1);
    return 0;
}
