#include <stdio.h>
#include <stdlib.h>
#include "IntNode.h"

// Insert a new node after the current node
void IntNode_InsertAfter
(IntNode_struct* thisNode, IntNode_struct* newNode) {
    IntNode_struct* tmpNext = NULL;

   tmpNext = thisNode->nextNodePtr;  // Remember next
   thisNode->nextNodePtr = newNode;  // this -- new -- ?
   newNode->nextNodePtr = tmpNext;   // this -- new -- next
}

// Get location pointed by nextNodePtr
IntNode_struct* IntNode_GetNext(IntNode_struct* thisNode) {
    return thisNode->nextNodePtr;
}

// Print node's data
void IntNode_PrintData(IntNode_struct* thisNode) {
    printf("%d, ", thisNode->dataVal);
}