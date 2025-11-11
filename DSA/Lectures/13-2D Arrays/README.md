# 13 - 2D Arrays

## Overview

Comprehensive understanding of two-dimensional arrays in C++. This module covers matrix operations, advanced searching algorithms, and memory management concepts for 2D data structures. Essential foundation for matrix algorithms, dynamic programming, and computational geometry problems.

## Topics Covered

- 2D array creation and initialization
- Matrix input/output operations
- Spiral matrix traversal algorithms
- Diagonal sum calculations and optimizations
- Linear and binary search in matrices
- Row and column sum computations
- Advanced matrix search techniques
- Pointer arithmetic with 2D arrays
- Memory layout and function parameter passing

## Questions Solved

1. **2D Array Creation** - Basic matrix declaration and initialization

   **Problem Statement**: Demonstrate different ways to create and initialize 2D arrays in C++. Understanding static allocation, initialization syntax, and accessing elements using row-column indexing.

   **Interview Context**: "How do you declare and initialize a 2D array? What's the memory layout of a 2D array?"

   **Technical Details**:
   - Time Complexity: O(1) - direct element access
   - Space Complexity: O(n×m) - matrix storage
   - Algorithm: Static array initialization and indexing
   - Memory Layout: Row-major order in contiguous memory

   **Example**: Matrix = [[100, 100, 100], [85, 74, 89], [63, 72, 65]]
   Output: `74` (accessing element at position [1][1])

2. **Matrix Input/Output Operations** - Dynamic matrix data handling

   **Problem Statement**: Implement functions to take user input for matrix elements and display the matrix in proper format. This demonstrates nested loop patterns for 2D array traversal.

   **Interview Context**: "Write a program to input and display a matrix. How do you handle dynamic input for matrices?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element for input/output
   - Space Complexity: O(n×m) - matrix storage
   - Algorithm: Nested loops for row-wise traversal
   - I/O Operations: Sequential input and formatted output

   **Example**: Input matrix 3x4 with values 1-12
   Output: 
   ```
   1 2 3 4
   5 6 7 8
   9 10 11 12
   ```

3. **Spiral Matrix Traversal** - Complex traversal pattern implementation

   **Problem Statement**: Traverse a matrix in spiral order (clockwise from outside to inside). This requires careful boundary management and direction changes at each layer.

   **Interview Context**: "Print matrix elements in spiral order. How do you handle different matrix dimensions?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element exactly once
   - Space Complexity: O(1) - constant extra space for boundaries
   - Algorithm: Four-directional traversal with boundary shrinking
   - Pattern: Top→Right→Bottom→Left in layers

   **Example**: Matrix = [[1,2,3,4], [5,6,7,8], [9,10,11,12], [13,14,15,16]]
   Output: `1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10` (spiral traversal)

4. **Diagonal Sum (Basic Approach)** - Sum of primary and secondary diagonals

   **Problem Statement**: Calculate sum of both diagonals in a square matrix using nested loops. Handle the center element carefully to avoid double counting in odd-sized matrices.

   **Interview Context**: "Find sum of both diagonals in a matrix. What's the time complexity of your approach?"

   **Technical Details**:
   - Time Complexity: O(n²) - nested loops through entire matrix
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Check diagonal conditions for each element
   - Optimization: Can be improved to O(n) with single loop

   **Example**: Matrix = [[1,2,3], [4,5,6], [7,8,9]]
   Output: `sum = 25` (1+5+9+3+7 = 25)

5. **Diagonal Sum (Optimized)** - Single loop optimization for diagonal sum

   **Problem Statement**: Optimize diagonal sum calculation using single loop instead of nested loops. This reduces time complexity from O(n²) to O(n) for square matrices.

   **Interview Context**: "Can you optimize the diagonal sum calculation? How do you avoid double counting the center element?"

   **Technical Details**:
   - Time Complexity: O(n) - single loop through diagonal elements
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Direct diagonal access with center element check
   - Optimization: Avoid redundant matrix traversal

   **Example**: Same matrix with improved performance
   Output: `sum = 25` (optimized approach)

6. **Linear Search in 2D Array** - Element search with position return

   **Problem Statement**: Implement linear search in 2D array that returns the position (row, column) of target element. Use pair data structure for returning coordinates.

   **Interview Context**: "Search for an element in a 2D array and return its position. What's the time complexity?"

   **Technical Details**:
   - Time Complexity: O(n×m) - worst case visit all elements
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Sequential search with early termination
   - Return Type: Pair for coordinate representation

   **Example**: Matrix = [[1,2,3], [4,5,6], [7,8,9]], Target = 8
   Output: `Element found at position: (2, 1)`

7. **Maximum Row Sum** - Find row with maximum sum

   **Problem Statement**: Calculate sum of each row and find the maximum row sum. This demonstrates row-wise traversal and running maximum calculation.

   **Interview Context**: "Find the row with maximum sum in a matrix. How do you handle ties?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element once
   - Space Complexity: O(1) - constant extra space for tracking
   - Algorithm: Row-wise sum calculation with maximum tracking
   - Pattern: Outer loop for rows, inner loop for columns

   **Example**: Matrix = [[1,2,3], [4,5,6], [7,8,9]]
   Output: `Maximum Row Sum = 24` (third row: 7+8+9)

8. **Maximum Column Sum** - Find column with maximum sum

   **Problem Statement**: Calculate sum of each column and find the maximum column sum. This demonstrates column-wise traversal patterns.

   **Interview Context**: "Find the column with maximum sum. How does column traversal differ from row traversal?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element once
   - Space Complexity: O(1) - constant extra space for tracking
   - Algorithm: Column-wise sum calculation with maximum tracking
   - Pattern: Outer loop for columns, inner loop for rows

   **Example**: Matrix = [[1,2,3], [4,5,6], [7,8,9]]
   Output: `Maximum Column Sum = 15` (third column: 3+6+9)

9. **Binary Search in 2D Array (Approach 1)** - Row-wise binary search

   **Problem Statement**: Search in row-wise and column-wise sorted matrix using binary search. First find the target row, then perform binary search within that row.

   **Interview Context**: "Search in a sorted 2D array efficiently. What's your approach for matrices sorted row-wise and column-wise?"

   **Technical Details**:
   - Time Complexity: O(log n + log m) - binary search on rows then columns
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Two-phase binary search approach
   - Prerequisite: Matrix sorted row-wise and column-wise

   **Example**: Matrix = [[1,3,5,7], [10,11,16,20], [23,30,34,60]], Target = 34
   Output: `Target found at index: (2)(2)`

10. **Optimized 2D Array Search (Approach 2)** - Staircase search algorithm

    **Problem Statement**: Implement staircase search algorithm for matrices sorted row-wise and column-wise. Start from top-right corner and eliminate rows/columns based on comparison.

    **Interview Context**: "What's the most efficient way to search in a row-wise and column-wise sorted matrix? Explain the staircase algorithm."

    **Technical Details**:
    - Time Complexity: O(n+m) - eliminate one row or column per step
    - Space Complexity: O(1) - constant extra space
    - Algorithm: Staircase search from top-right corner
    - Strategy: Move left if target smaller, down if target larger

    **Example**: Matrix with sorted rows and columns, Target = 100
    Output: `Target not found......` (O(n+m) time complexity)

11. **Matrix Pointer Basics** - Understanding 2D array memory layout

    **Problem Statement**: Demonstrate pointer arithmetic with 2D arrays. Show how matrix name represents address and how pointer arithmetic works with rows.

    **Interview Context**: "Explain the relationship between 2D arrays and pointers. How does mat+1 differ from &mat[0][1]?"

    **Technical Details**:
    - Time Complexity: O(1) - direct address calculation
    - Space Complexity: O(1) - no extra space for pointer operations
    - Algorithm: Pointer arithmetic with row-major layout
    - Memory: Contiguous allocation with row-wise arrangement

    **Example**: Matrix address relationships
    Output: Shows memory addresses and pointer arithmetic results

12. **Matrix Pointers in Functions** - Parameter passing and pointer dereferencing

    **Problem Statement**: Understand how 2D arrays are passed to functions and how to access elements using pointer dereferencing. Demonstrate different syntax for matrix parameter declaration.

    **Interview Context**: "How do you pass 2D arrays to functions? What are different ways to declare matrix parameters?"

    **Technical Details**:
    - Time Complexity: O(1) - direct element access via pointers
    - Space Complexity: O(1) - no extra space for parameter passing
    - Algorithm: Pointer dereferencing with double indirection
    - Parameter Types: Array notation vs pointer notation

    **Example**: Function parameter passing and element access
    Output: `5` (accessing mat[1][1] using pointer arithmetic)