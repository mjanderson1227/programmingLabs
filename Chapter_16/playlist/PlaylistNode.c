#include "PlaylistNode.h"


void CreatePlaylistNode(PlaylistNode *thisNode, char *uniqueID, char *songName, char *artistName, int songLength, PlaylistNode* nextNode) {
    strcpy(thisNode -> uniqueID, uniqueID);
    strcpy(thisNode -> songName, songName);
    strcpy(thisNode -> artistName, artistName);
    thisNode -> songLength = songLength;
    thisNode -> nextNodePtr = nextNode;
}


void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode) {
    while(thisNode -> nextNodePtr != NULL) {
        thisNode = thisNode -> nextNodePtr;
    }
    thisNode -> nextNodePtr = newNode;
}


void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode) {
    PlaylistNode *temp = thisNode -> nextNodePtr;
    thisNode -> nextNodePtr = newNode;
    newNode -> nextNodePtr = temp;
}


PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) {
    return thisNode -> nextNodePtr;
}


void PrintPlaylistNode(PlaylistNode* thisNode) {
    printf("Unique ID: %s\n", thisNode -> uniqueID);
    printf("Song Name: %s\n", thisNode -> songName);
    printf("Artist Name: %s\n", thisNode -> artistName);
    printf("Song Length (in seconds): %d\n", thisNode -> songLength);
}


