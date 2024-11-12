#include <iostream>
#include "Queue.h"

/*
Function that puts members in a queue.
Queue* q - the queue
unsigned int newValue - the new the value to put in the queue
*/
void enqueue(Queue* q, unsigned int newValue)
{
    if (q->size < q->capacity) // Checking whether there is room for another organ
    {
        q->data[q->size] = newValue; // Add the new value
        q->size++; // Increase the size by one
    }
}


/*
Function that takes out the first element 
Queue* q - the queue
return element in top of queue, or -1 if empty
*/
int dequeue(Queue* q)
{
    if (q->size == 0)
    {
        // If its empty return -1
        return -1;
    }
    int first = q->data[0]; // The first element in the

    // Moving all the element on step back
    for (int i = 1; i < q->size; i++)
    {
        q->data[i - 1] = q->data[i];
    }

    q->size--; // Decrease the size by one
    return first; //Returning the element that was in the top
}

/*
Function that clears all the values ​​in the array
Queue* q - the queue
*/
void cleanQueue(Queue* q)
{
    delete[](q->data); //Release/Free the array
}


/*
Function that makes a new queue 
Queue* q - the queue
unsigned int size - the capacity for the new queue
*/
void initQueue(Queue* q, unsigned int size)
{
    q->data = new int[size]; // Allocation of memory according to the initial capacity
    q->size = 0; // initialize the size
    q->capacity = size; // Saving capacity
}


/*
Function that checks if the queue is empty
Queue* q - the queue
returns true if its empty and if not false
*/
bool isEmpty(Queue* q)
{
    return q->size == 0;
}


/*
Function that checks if the queue is full
Queue* q - the queue
returns true if its full till the capacity and if not false
*/
bool isFull(Queue* q)
{
    return q->size == q->capacity;
}
