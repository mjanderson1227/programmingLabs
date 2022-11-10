#include <stdio.h>
#include <string.h>


int main( void )
{ 
    char str[50] = "Hello";
    strncat(str, str, 1);
    printf("%s", str);
}