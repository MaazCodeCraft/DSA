# 10 - Array-I

## Overview

Understanding arrays, memory management, searching algorithms, and pointer arithmetic in C++. This module covers fundamental array operations that are essential for data structure manipulation and algorithm implementation.

## Topics Covered

- Array declaration and initialization
- Dynamic array input/output
- Array traversal algorithms
- Searching techniques (Linear & Binary Search)
- Array manipulation and reversal
- Pointer arithmetic with arrays
- Memory management concepts

## Questions Solved

1. **Array Creation and Initialization** - Understanding different ways to declare and initialize arrays
   
   **Problem Statement**: Demonstrate various array initialization techniques including uninitialized arrays, partial initialization, and complete initialization. This is fundamental for understanding memory allocation patterns.
   
   **Interview Context**: "How would you initialize an array in C++? What happens when you partially initialize an array?"
   
   **Example**: Different initialization methods
   ```
   int arr[50];              // Garbage values
   int arr1[50] = {1,2,3};   // 1,2,3,0,0,0...
   int arr2[] = {1,2,3};     // Size automatically determined
   int arr3[5] = {1,2,3,4,5}; // Complete initialization
   ```

2. **Dynamic Array Input/Output** - Interactive array operations with user input
   
   **Problem Statement**: Create a program that accepts array size from user, takes input for each element, and displays the complete array. This demonstrates dynamic memory handling and user interaction.
   
   **Interview Context**: "Implement a function to read an array of variable size from user input and display it."
   
   **Example**: 
   Input: Size = 3, Elements = [10, 20, 30]
   Output: `array elements are: 10, 20, 30,`

3. **Find Largest Element** - Linear search for maximum value
   
   **Problem Statement**: Given an array of integers, find the largest element using a single pass algorithm. This is a classic example of linear traversal with comparison operations.
   
   **Interview Context**: "Write an algorithm to find the maximum element in an unsorted array. What's the time complexity?"
   
   **Example**: Array = [5, 4, 3, 9, 2]
   Output: `Largest = 9`

4. **Find Smallest Element** - Linear search for minimum value
   
   **Problem Statement**: Implement an algorithm to find the smallest element in an array using optimal comparison strategy. Demonstrates understanding of initialization and comparison logic.
   
   **Interview Context**: "How would you find the minimum element? What edge cases should you consider?"
   
   **Example**: Array = [5, 4, 3, 9, 2]
   Output: `Smallest = 2`

5. **Arrays Passed by Reference** - Understanding array parameter passing
   
   **Problem Statement**: Demonstrate that arrays are automatically passed by reference to functions, unlike primitive data types. This is crucial for understanding memory efficiency and side effects.
   
   **Interview Context**: "Explain the difference between passing arrays and integers to functions. Why don't we need pointers for arrays?"
   
   **Example**: Original array [5, 4, 3, 9, 2], after function call arr[0] becomes 1000
   Output: `1000`

6. **Linear Search Algorithm** - Sequential search implementation
   
   **Problem Statement**: Implement linear search to find the index of a target element in an unsorted array. Return -1 if element not found. This is fundamental for understanding search algorithms.
   
   **Interview Context**: "Implement linear search. What's the best and worst case time complexity?"
   
   **Example**: Array = [5, 4, 3, 9, 2], Target = 9
   Output: `3` (index position)

7. **Array Reversal (Extra Space)** - Reverse using auxiliary array
   
   **Problem Statement**: Reverse an array using additional memory space. This approach demonstrates the trade-off between space and simplicity in algorithm design.
   
   **Interview Context**: "Reverse an array using extra space. What are the space and time complexities?"
   
   **Example**: 
   Original: `5, 4, 3, 9, 2,`
   Reversed: `2, 9, 3, 4, 5,`

8. **Array Reversal (Two Pointers)** - In-place reversal algorithm
   
   **Problem Statement**: Reverse an array in-place using two pointers technique without extra space. This is an optimal solution demonstrating space-efficient algorithms.
   
   **Interview Context**: "Can you reverse an array without using extra space? Explain the two-pointer technique."
   
   **Example**: 
   Original: `5, 4, 3, 9, 2,`
   Reversed: `2, 9, 3, 4, 5,`

9. **Binary Search Algorithm** - Logarithmic search in sorted arrays
   
   **Problem Statement**: Implement binary search algorithm for finding elements in sorted arrays. This demonstrates divide-and-conquer approach and logarithmic time complexity.
   
   **Interview Context**: "Implement binary search. Why does the array need to be sorted? What's the time complexity?"
   
   **Example**: Sorted array [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15], Target = 10
   Output: `target found at index(9)`

10. **Array vs Pointer Behavior** - Understanding array name as constant pointer
    
    **Problem Statement**: Demonstrate the difference between regular pointers and array names. Array names are constant pointers that cannot be reassigned.
    
    **Interview Context**: "What's the difference between an array name and a pointer? Can you reassign an array name?"
    
    **Example**: Pointer can be reassigned, array name cannot
    Output: Shows memory address of array

11. **Pointer Arithmetic Basics** - Understanding pointer increment/decrement
    
    **Problem Statement**: Demonstrate how pointer arithmetic works with different data types. Incrementing a pointer moves it by the size of the data type.
    
    **Interview Context**: "Explain pointer arithmetic. How much does ptr++ increment the address?"
    
    **Example**: Shows address changes when incrementing/decrementing pointers

12. **Array Access via Pointer Arithmetic** - Alternative array indexing
    
    **Problem Statement**: Access array elements using pointer arithmetic instead of traditional indexing. This shows the relationship between arrays and pointers.
    
    **Interview Context**: "How are arrays and pointers related? Show alternative ways to access array elements."
    
    **Example**: Array [1,2,3,4,5] accessed using *(arr+i)
    Output: `1 2 3 4 5`

13. **Pointer Difference Calculation** - Distance between array elements
    
    **Problem Statement**: Calculate the difference between two pointers pointing to different array elements. This gives the number of elements between them.
    
    **Interview Context**: "How do you find the distance between two array elements using pointers?"
    
    **Example**: Two pointers with 3 elements difference
    Output: `3`

14. **Pointer Comparison Operations** - Relational operations on pointers
    
    **Problem Statement**: Demonstrate comparison operations between pointers. Useful for boundary checking and range validation in algorithms.
    
    **Interview Context**: "Can you compare pointers? What operations are valid?"
    
    **Example**: Comparing two array pointers
    Output: `true false false false` (for >=, !=, ==, <= operations)