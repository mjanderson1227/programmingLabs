#include <stdio.h>
#include <stdlib.h>

typedef struct Nodes {
    char name[40];
    struct Nodes *next;
} Node;

Node* makeNode( char* name ) {
    Node *returnNode = (Node*) malloc(sizeof(Node));

    strcpy(returnNode -> name, name);
    returnNode -> next = NULL;

    return returnNode;
}

void addNode( Node *head, Node *node) {
    Node *temp = head;
    while( temp != NULL ) {
    
    }
}

int main ( void ) {

    return 0;
}