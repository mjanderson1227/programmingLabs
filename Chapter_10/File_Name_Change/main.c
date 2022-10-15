#include <stdio.h>
#include <string.h>

int main(void) {
    char userInp[100];
    scanf("%s", userInp);
    FILE* file = fopen(userInp, "r");

    while(1) {
        char buffer[100];
        char newStr[100];
        if(fgets(buffer, 100, file)==NULL) break;
        sscanf(buffer, "%[^_]", newStr);
        strcat(newStr, "_info.txt");
        printf("%s\n", newStr);
    }
    fclose(file);
    return 0;
}
