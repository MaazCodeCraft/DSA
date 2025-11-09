# 12 - Basic Sorting Algorithms

## Overview

Fundamental sorting algorithms and their implementations in C++. This module covers comparison-based and non-comparison-based sorting techniques, analyzing time and space complexities, and understanding when to use each algorithm. Essential foundation for advanced algorithms and data structures.

## Topics Covered

- Bubble Sort algorithm and optimization
- Selection Sort implementation
- Insertion Sort technique
- Counting Sort for integer arrays
- Built-in sort functions
- Time and space complexity analysis
- Algorithm stability and adaptability
- Comparison of sorting techniques

## Questions Solved

1. **Bubble Sort** - Basic comparison-based sorting algorithm

   **Problem Statement**: Implement bubble sort algorithm that repeatedly steps through the array, compares adjacent elements and swaps them if they're in wrong order. The pass through the array is repeated until no swaps are needed.

   **Interview Context**: "Implement bubble sort. What's its time complexity? How can you optimize it for nearly sorted arrays?"

   **Example**: Array = [5, 4, 1, 3, 2]
   Output: `1 2 3 4 5` (sorted in ascending order)

2. **Selection Sort** - Find minimum and place at beginning

   **Problem Statement**: Implement selection sort that finds the minimum element from unsorted portion and places it at the beginning. This builds the sorted array one element at a time.

   **Interview Context**: "Explain selection sort algorithm. Why is it called 'selection' sort? What's its performance?"

   **Example**: Array = [5, 4, 1, 3, 2]
   Output: `1 2 3 4 5` (sorted by selecting minimums)

3. **Insertion Sort** - Insert elements in correct position

   **Problem Statement**: Implement insertion sort that builds the sorted array one element at a time by inserting each element into its correct position among the previously sorted elements.

   **Interview Context**: "How does insertion sort work? When is it more efficient than other O(n²) algorithms?"

   **Example**: Array = [5, 4, 1, 3, 2]
   Output: `1 2 3 4 5` (sorted by insertion technique)

4. **Counting Sort** - Non-comparison based sorting

   **Problem Statement**: Implement counting sort for arrays with limited range of integer values. This algorithm counts occurrences of each element and uses this information to place elements in sorted order.

   **Interview Context**: "Implement a sorting algorithm that works in O(n) time. What are the constraints for counting sort?"

   **Example**: Array = [1, 4, 1, 3, 2, 4, 3, 7]
   Output: `1 1 2 3 3 4 4 7` (sorted using frequency counting)

5. **Built-in Sort Functions** - Using STL sort algorithms

   **Problem Statement**: Demonstrate usage of C++ STL sort functions including default ascending sort and custom comparator for descending sort. Understanding library functions and their complexity.

   **Interview Context**: "How do you use built-in sort functions? What's the time complexity of STL sort?"

   **Example**: Array = [1, 4, 1, 3, 2, 4, 3, 7]
   Output: 
   ```
   1 1 2 3 3 4 4 7 (ascending)
   7 4 4 3 3 2 1 1 (descending)
   ```