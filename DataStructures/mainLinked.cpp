/*
#include <iostream>
#include "LinkedList.h"

// Helper function to print the current state of the linked list
void PrintList(IntNode* head)
{
    if (!head) {
        std::cout << "The list is empty." << std::endl;
    }
    else {
        std::cout << "Current list: ";
        IntNode* current = head;
        while (current) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
}

int main() 
{
    IntNode* head = nullptr;

    // Adding nodes
    std::cout << "Starting to add nodes" << std::endl;
    AddNode(head, 1);
    PrintList(head);
    AddNode(head, 2);
    PrintList(head);
    AddNode(head, 3);
    PrintList(head);
    std::cout << "Finished adding nodes" << std::endl;

    // Deleting all nodes
    std::cout << "Starting to delete nodes" << std::endl;
    DelNode(head);
    PrintList(head);
    DelNode(head);
    PrintList(head);
    DelNode(head);
    PrintList(head);
    DelNode(head);
    PrintList(head);

    return 0;
}
*/
