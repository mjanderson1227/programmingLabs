#include "PlaylistNode.h"

void PrintMenu(char* playlistTitle) {
    printf("%s PLAYLIST MENU\na - Add song\nr - Remove song\nc - Change position of song\ns - Output songs by specific artist\nt - Output total time of playlist (in seconds)\no - Output full playlist\nq - Quit\n", playlistTitle);
}

PlaylistNode* ExecuteMenu(char option, char *playlistTitle, PlaylistNode *headNode) {
    while (1) {
        switch(option) {
            case 'a':
                /*TODO: Define*/
                break;

            case 'r':
                /*TODO: Define*/
                break;

            case 'c':
                /*TODO: Define*/
                break;

            case 's':
                /*TODO: Define*/
                break;

            case 't':
                /*TODO: Define*/
                break;

            case 'o':
                /*TODO: Define*/
                break;

            case 'q':
                /*TODO: Define*/
                break;

            default:
                continue;
        }
    }
    return headNode;
}

int main(void) {
    char title[50];
    printf("Enter playlist's title:\n");
    fgets(title, 49, stdin);
    strtok(title, "\n");
    
    return 0;
}