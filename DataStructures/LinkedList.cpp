#include <iostream>
#include "LinkedList.h"


/* 
Function to create a new integer node
value- the value do the new node
return: The next pointer is set to nullptr as it is not yet linked to any other node.
*/
IntNode* CreateIntNode(int value)
{
    IntNode* newIntNode = new IntNode; // Dynamically allocate memory for a new node
    newIntNode->value = value; // Set the node's value
    newIntNode->next = nullptr; // Set the next pointer to nullptr, indicating it's the last node
    return newIntNode; // Return the newly created node
}


/*
Function to insert a node at the end of the list
head- the pointer for the first node
newNode- the new node that will go in to the linked list
*/
void InsertAtEnd(IntNode*& head, IntNode* newNode)
{
    if (!head) // If the list is empty
    {
        head = newNode; // The new node becomes the head of the list
    }
    else
    {
        IntNode* p = head; // Start from the head of the list
        while (p->next) // Traverse to the last node
        {
            p = p->next; // Move to the next node
        }
        p->next = newNode; // Set the last node's next pointer to the new node
    }
}


/*
Function to add a node with a given value at the start of the list
head- the pointer for the first node
value- the value do the new node
*/
void AddNode(IntNode*& head, int value)
{
    IntNode* newNode = CreateIntNode(value); // Create a new node with the given value
    newNode->next = head; // Set the new node's next pointer to the current head of the list
    head = newNode; // Update the head of the list to the new node
}


/*
Function to delete the node at the start of the linked list and return the deleted num
head- the pointer for the first node
*/
int DelNode(IntNode*& head)
{
    if (head) // If the list is not empty
    {
        IntNode* dNode = head; // Store the current head node in a temporary pointer
        head = head->next; // Update the head pointer to the next node
        int value = dNode->value;
        delete dNode; // Delete the old head node to free the memory
        return value;
    }
    else
    {
        std::cout << "The list is already empty. No node to delete." << std::endl;
        return -1;
    }
}
