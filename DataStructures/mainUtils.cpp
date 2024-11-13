#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
#include "Utils.h"



void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Test the reverse function
    int nums[] = { 1, 2, 3, 4, 5 };
    unsigned int size = sizeof(nums) / sizeof(nums[0]);

    std::cout << "Original array: ";
    printArray(nums, size);

    reverse(nums, size);

    std::cout << "Reversed array: ";
    printArray(nums, size);

    // Test the reverse10 function
    int* reversedNumbers = reverse10();
    std::cout << "Reversed input of 10 numbers: ";
    printArray(reversedNumbers, 10);

    return 0;
}
