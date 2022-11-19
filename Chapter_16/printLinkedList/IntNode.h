#include <stdio.h>
#include <stdlib.h>

#ifndef INT_NODE_H
#define INT_NODE_H

typedef struct IntNode_struct {
    int dataVal;
    struct IntNode_struct* nextNodePtr;
} IntNode_struct;

// Insert a new node after the current node
void IntNode_InsertAfter (IntNode_struct *thisNode, IntNode_struct *newNode);

// Get location pointed by nextNodePtr
IntNode_struct* IntNode_GetNext(IntNode_struct *thisNode);

// Print node's data
void IntNode_PrintData(IntNode_struct *thisNode);

#endif