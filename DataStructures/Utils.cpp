#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
#include "Utils.h"

/*
 Reverses the order of elements in an integer array using a stack.
 int* nums- Pointer to the integer array to be reversed.
 int size- The number of elements in the array.
 */
void reverse(int* nums, unsigned int size)
{
    Stack stack;
    initStack(&stack); // Initialize the stack

    // Push each element of the array onto the stack
    for (int i = 0; i < size; i++)
    {
        push(&stack, nums[i]);
    }

    // Pop each element from the stack back into the array in reversed order
    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&stack);
    }
}

/*
 Reads 10 integers from the user, reverses their order, and returns them.
 return a pointer to a static array containing the 10 reversed integers.
*/
int* reverse10() 
{
    static int numbers[10];  // Define an array to store 10 integers

    std::cout << "Please enter 10 integers:" << std::endl;

    // Read 10 integers from the user
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    // Reverse the order of numbers in the array
    std::reverse(numbers, numbers + 10);

    // Return the array with reversed numbers
    return numbers;
}
