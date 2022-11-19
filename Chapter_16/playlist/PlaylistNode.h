#ifndef PLAYLISTNODE_H
#define PLAYLISTNODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char uniqueID[50];
    char songName[50];
    char artistName[50];
    int songLength;
    struct PlaylistNode* nextNodePtr;
} PlaylistNode;



void CreatePlaylistNode( PlaylistNode*, char*, char*, char*, int, PlaylistNode* );


void InsertPlaylistNodeAfter( PlaylistNode*, PlaylistNode* );


void SetNextPlaylistNode(PlaylistNode*, PlaylistNode*);


PlaylistNode* GetNextPlaylistNode(PlaylistNode*);


void PrintPlaylistNode(PlaylistNode*);


#endif