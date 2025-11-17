# 15 - Vectors

## Overview

Understanding dynamic arrays (vectors) in C++, memory management, and advanced array algorithms. This module covers vector operations, dynamic memory allocation, and efficient problem-solving techniques using vectors.

## Topics Covered

- Dynamic memory allocation and deallocation
- Vector creation and initialization
- Vector capacity vs size concepts
- Memory implementation behind vectors
- Two-pointer technique with vectors
- 2D vector operations
- Vector-based algorithm optimization

## Questions Solved

1. **Dynamic Memory Creation** - Understanding heap memory allocation

   **Problem Statement**: Demonstrate dynamic memory allocation using new and delete operators. Understanding heap vs stack memory allocation and proper memory management practices.

   **Interview Context**: "Explain dynamic memory allocation in C++. What's the difference between stack and heap memory?"

   **Example**: Dynamic integer allocation
   Output:

   ```
   5
   ```

2. **Dynamic Memory Allocation Behind The Scenes** - Memory management internals

   **Problem Statement**: Explore how dynamic memory allocation works internally, including memory fragmentation and allocation strategies. Understanding the relationship between new/delete and malloc/free.

   **Interview Context**: "How does dynamic memory allocation work internally? What happens when you call new?"

   **Example**: Memory allocation demonstration
   Output:

   ```
   arr[0] = 1
   arr[1] = 2
   arr[2] = 3
   ```

3. **2D Dynamic Array Creation** - Multi-dimensional dynamic allocation

   **Problem Statement**: Create and manage 2D arrays using dynamic memory allocation. Demonstrate proper memory cleanup and access patterns for multi-dimensional arrays.

   **Interview Context**: "How do you create a 2D array dynamically? What are the memory layout considerations?"

   **Example**: 2x3 dynamic matrix
   Output:

   ```
   1 2 3
   4 5 6
   ```

4. **Vector Creation and Initialization** - Different vector initialization methods

   **Problem Statement**: Explore various ways to create and initialize vectors including default construction, initializer lists, and fill constructors. Understanding vector capacity management.

   **Interview Context**: "What are different ways to initialize vectors? How does vector capacity work?"

   **Example**: Multiple vector initialization methods
   Output:

   ```
   0
   4
   10
   -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
   ```

5. **Vector Memory Implementation** - Understanding vector capacity and growth

   **Problem Statement**: Analyze how vectors manage memory internally, including capacity doubling strategy and memory reallocation. Understanding the difference between size and capacity.

   **Interview Context**: "How do vectors grow? What's the difference between size and capacity?"

   **Example**: Vector growth pattern
   Output:

   ```
   size = 0, cap = 0
   size = 1, cap = 1
   size = 2, cap = 2
   size = 3, cap = 4
   size = 4, cap = 4
   size = 5, cap = 8
   ```

6. **Pair Sum Problem** - Two-pointer technique with vectors

   **Problem Statement**: Find two numbers in a sorted array that add up to a target sum using two-pointer technique. Demonstrate efficient O(n) solution for pair finding problems.

   **Interview Context**: "Find two numbers that sum to target. Can you solve it in O(n) time?"

   **Example**: Array = [2, 7, 11, 15], Target = 9
   Output: `(0)(1)` (indices of elements that sum to target)

7. **2D Vector Implementation** - Working with vector of vectors

   **Problem Statement**: Create and manipulate 2D vectors for matrix operations. Understanding jagged arrays and dynamic 2D data structures using vectors.

   **Interview Context**: "How do you implement a 2D vector? What are the advantages over regular 2D arrays?"

   **Example**: 2D vector operations
   Output:

   ```
   1 2 3
   4 5
   6 7 8 9
   ```
