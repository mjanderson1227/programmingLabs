/*
Complete main.c to define the struct ContactNode with the following data members:

    char contactName[]
    char contactPhoneNumber[]
    ContactNode* nextNodePtr

(2) Add the following functions:

    InitializeContactNode() with parameters for name followed by phone number (1 pt)
    GetName() - Accessor (1 pt)
    GetPhoneNumber() - Accessor (1 pt)
    InsertAfter() (2 pts)
    GetNext() - Accessor (1 pt)
    PrintContactNode()

Ex: if the name is Roxanne Hughes and the phone number is 443-555-2864, PrintContactNode() outputs:

Name: Roxanne Hughes
Phone number: 443-555-2864

(2) Define main() to read the name and phone number for three contacts and output each contact. Create three ContactNodes and use the nodes to build a linked list. (2 pts)

Note: End the last input line with a newline.

Ex: If the input is:

Roxanne Hughes
443-555-2864
Juan Alberto Jr.
410-555-9385
Rachel Phillips
310-555-6610

the output is:

Person 1: Roxanne Hughes, 443-555-2864
Person 2: Juan Alberto Jr., 410-555-9385
Person 3: Rachel Phillips, 310-555-6610

(3) Output the linked list using a loop to output contacts one at a time. (2 pts)

Ex:

CONTACT LIST
Name: Roxanne Hughes
Phone number: 443-555-2864

Name: Juan Alberto Jr.
Phone number: 410-555-9385

Name: Rachel Phillips
Phone number: 310-555-6610

*/

#include <stdio.h>
#include <stdlib.h>



typedef struct ContactNode {
    char contactName[40];
    char contactPhoneNumber[10];
    struct ContactNode *nextNodePtr;
} ContactNode;


ContactNode* InitializeContactNode () {
    ContactNode *node = (ContactNode*)malloc(sizeof(ContactNode));
    node->nextNodePtr = NULL;
    return node;
}

char* GetName (ContactNode *node) {
    return node->contactName;
}

char* GetPhoneNumber (ContactNode *node) {
    return node->contactPhoneNumber;
}

void InsertAfter (ContactNode *head, ContactNode *nextNode) {
    //Seeks the head of the linked list
    while (head -> nextNodePtr != NULL) {
        head = head -> nextNodePtr;
    }
    //Inserts the new node at the end of the linked list
    head -> nextNodePtr = nextNode;
}

ContactNode* GetNext (ContactNode *node) {
    return node->nextNodePtr;
}


ContactNode* PrintContactNode (ContactNode *node) {
    printf("Name: %s", node->contactName);
    printf("Phone number: %s", node->contactPhoneNumber);
}

int main ( int argc, char* argv[] )
{
    return 0;
}