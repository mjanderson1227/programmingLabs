/*Write a recursive function called PrintLinkedList() that outputs the integer value of each node in a linked list. Function PrintLinkedList() has one parameter, the head node of a list. The main program reads the size of the linked list, followed by the values in the list. Assume the linked list has at least 1 node.

Ex: If the input of the program is:

5 1 2 3 4 5

the output of the PrintLinkedList() function is:

1, 2, 3, 4, 5,

Hint: Output the value of the current node, then call the PrintLinkedList() function repeatedly until the end of the list is reached. Refer to the IntNode class to explore any available member functions that can be used for implementing the PrintLinkedList() function.
*/
#include <stdio.h>
#include <stdlib.h>
#include "IntNode.h"

//Recursive function that will print the list
void PrintLinkedList( IntNode_struct* headNode ) {
    //Base Case
    if( headNode == NULL )
        return;
    printf( "%d\n", headNode -> dataVal );
    PrintLinkedList( headNode -> nextNodePtr );
}


// Create a new node
IntNode_struct* CreateNode( int value ) {
    IntNode_struct* newNode = ( IntNode_struct* ) malloc( sizeof( IntNode_struct ) );
    newNode -> dataVal = value;
    newNode -> nextNodePtr = NULL;

    return newNode;
}

int main(void) {
    int size;
    int value;
    
    scanf( "%d", &size );
    scanf( "%d", &value );
    IntNode_struct* headNode = CreateNode( value ); // Make head node as the first node
    IntNode_struct* lastNode = headNode;     // Node to add after
    IntNode_struct* newNode = NULL;          // Node to create

   // Insert the second and the rest of the nodes
    for ( int n = 0; n < size - 1; ++n ) {
        scanf( "%d", &value );
        newNode = CreateNode( value );
        IntNode_InsertAfter( lastNode, newNode );
        lastNode = newNode;
    }

   // Call PrintLinkedList with node after head node
    PrintLinkedList( headNode );
    return 0;
}