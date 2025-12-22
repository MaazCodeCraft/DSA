# 22 - Time & Space Complexity Part-I

## Overview

Introduction to algorithm analysis through time and space complexity. This module covers fundamental concepts of Big O notation, complexity analysis techniques, and performance evaluation of algorithms essential for writing efficient code and technical interviews.

## Topics Covered

- Big O notation fundamentals
- Time complexity analysis techniques
- Space complexity concepts
- Constant time complexity O(1)
- Linear time complexity O(n)
- Quadratic time complexity O(n²)
- Logarithmic time complexity O(log n)
- Algorithm performance comparison
- Complexity analysis of common algorithms

## Questions Solved

1. **Constant Time Complexity** - O(1) algorithm analysis

   **Problem Statement**: Analyze algorithm that performs constant number of operations regardless of input size. Demonstrates O(1) time complexity where execution time remains constant for any input size.

   **Interview Context**: "What is constant time complexity? Give examples of O(1) operations."

   **Example**: Find smallest element in sorted array (first element)
   Output: `1` (constant time operation)

2. **Linear Time Complexity** - O(n) algorithm analysis

   **Problem Statement**: Analyze algorithm that performs operations proportional to input size. Demonstrates O(n) time complexity where execution time grows linearly with input size.

   **Interview Context**: "Explain linear time complexity. How does execution time change with input size?"

   **Example**: Print all elements in array
   Output: `1 2 3 4 5` (time proportional to array size)

3. **Quadratic Time Complexity** - O(n²) algorithm analysis

   **Problem Statement**: Analyze algorithm with nested loops that performs operations proportional to square of input size. Demonstrates O(n²) time complexity with nested iteration patterns.

   **Interview Context**: "What causes quadratic time complexity? How do nested loops affect performance?"

   **Example**: Print 2D matrix elements
   Output:
   ```
   1 2 3 
   4 5 6 
   7 8 9 
   ```

4. **Analysis of Bubble Sort** - Practical complexity analysis

   **Problem Statement**: Analyze time complexity of bubble sort algorithm through nested loop structure and comparison operations. Understanding worst-case, best-case, and average-case scenarios.

   **Interview Context**: "Analyze bubble sort complexity. What's the time complexity in different scenarios?"

   **Example**: Bubble sort complexity analysis
   Output: `O(n²) worst and average case, O(n) best case`

5. **Logarithmic Time Complexity** - O(log n) algorithm analysis

   **Problem Statement**: Analyze binary search algorithm that reduces problem size by half in each iteration. Demonstrates O(log n) time complexity through divide-and-conquer approach.

   **Interview Context**: "Explain logarithmic complexity. Why is binary search O(log n)?"

   **Example**: Binary search analysis with mathematical derivation
   Output: `target found at index(mid)` or `target not found.`