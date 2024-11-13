#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

/*
 Function that removes and returns the top item from the stack. 
 Stack*s - Pointer to the stack from which to pop the top item.
 Return -1 if stack is empty, oth
*/
int pop(Stack* s) 
{
	if (s->list != nullptr)
	{
		return DelNode(s->list); // Removes the top item from the stack and returns its value
	}
	else
	{
		return -1; // Indicates that the stack is empty
	}
}


/*
 Adds an item to the top of the stack.
 Stack*s - Pointer to the stack to which the item will be added.
 items - The value of the item to be added.
 */
void push(Stack* s, unsigned int items)
{
	if (s->list == nullptr)
	{
		// Stack is empty; create the first node
		s->list = new IntNode;
		s->list->value = items;
		s->list->next = nullptr;
	}
	else
	{
		// Stack has items; add a new node at the top
		AddNode(s->list, items);
	}
}


/*
 Initializes an empty stack by setting its list pointer to nullptr.
 Stack*s - Pointer to the stack to initialize.
 */

void initStack(Stack* s)
{
	// Initializes the stack by setting the 'list' pointer to nullptr, indicating an empty stack
	s->list = nullptr;
}




/*
 Clears all items from the stack and frees allocated memory.
 Stack*s - Pointer to the stack to be cleaned.
 */
void cleanStack(Stack* s)
{
	// Frees all memory allocated for the stack's linked list nodes
	IntNode* pre = s->list;
	if (pre == nullptr)
	{
		return; // Stack is already empty
	}
	else if (pre->next == nullptr)
	{
		// Only one item in the stack
		delete pre;
		return;
	}
	else
	{
		// Multiple items; iterate and delete each node
		IntNode* cur = s->list->next;
		while (cur)
		{
			delete pre;
			pre = cur;
			cur = cur->next;
		}
		delete pre; // Delete the last remaining node
	}
}


/*
 Checks if the stack is empty.
 Stack*s -  Pointer to the stack to check.
 return True if the stack is empty, otherwise false.
 */
bool isEmpty(Stack* s)
{
	// Checks if the stack is empty by verifying if 'list' points to nullptr
	return s->list == nullptr;
}



/*
 Checks if the stack is full.
 Stack* s - Pointer to the stack to check.
 return Always returns false, as a linked list-based stack has dynamic capacity.
 */
bool isFull(Stack* s)
{
	// The stack is implemented with a linked list, so it can dynamically grow, so it is never full
	return false;
}
