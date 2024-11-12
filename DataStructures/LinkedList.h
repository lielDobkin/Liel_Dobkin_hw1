#ifndef LINCKEDLIST
#define LINCKEDLIST

typedef struct IntNode
{
	int value;
	struct IntNode* next;
} IntNode;

// Function to create a new integer node
IntNode* CreateIntNode(int value);
// Function to insert a node at the end of the list
void InsertAtEnd(IntNode*& head, IntNode* newNode);

// Function to add a node with a given value at the start of the list
void AddNode(IntNode*& head, int value);
// Function to delete the node at the start of the linked list
void DelNode(IntNode*& head);



#endif // STACK_H#pragma once#pragma once
