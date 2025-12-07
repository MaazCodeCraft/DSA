# 21 - Divide & Conquer

## Overview

Advanced algorithmic paradigm of divide and conquer - breaking complex problems into smaller subproblems, solving them recursively, and combining results. This module covers efficient sorting algorithms, search techniques, and optimization strategies essential for competitive programming and system design.

## Topics Covered

- Divide and conquer methodology
- Merge sort algorithm and implementation
- Quick sort algorithm and partitioning
- Time complexity analysis (O(n log n))
- Sorting in ascending and descending order
- Search algorithms in modified arrays
- Recursive problem decomposition
- Algorithm optimization techniques

## Questions Solved

1. **Merge Sort for Ascending Order** - Stable divide and conquer sorting

   **Problem Statement**: Implement merge sort algorithm to sort array in ascending order using divide and conquer approach. Demonstrates stable sorting with guaranteed O(n log n) time complexity.

   **Interview Context**: "Implement merge sort. What's the time complexity and why is it stable?"

   **Example**: Sort array [6, 3, 7, 5, 2, 4]
   Output: `2 3 4 5 6 7`

2. **Merge Sort for Descending Order** - Reverse order sorting

   **Problem Statement**: Modify merge sort to sort array in descending order by changing comparison logic in merge function. Understanding algorithm adaptation for different requirements.

   **Interview Context**: "How do you modify merge sort for descending order? What changes are needed?"

   **Example**: Sort array [6, 3, 7, 5, 2, 4] in descending order
   Output: `7 6 5 4 3 2`

3. **Quick Sort for Ascending Order** - In-place divide and conquer sorting

   **Problem Statement**: Implement quick sort algorithm using partitioning technique for ascending order sorting. Demonstrates in-place sorting with average O(n log n) complexity.

   **Interview Context**: "Implement quick sort. How does partitioning work and what's the worst-case complexity?"

   **Example**: Sort array [6, 3, 7, 5, 2, 4]
   Output: `2 3 4 5 6 7`

4. **Quick Sort for Descending Order** - Reverse partitioning logic

   **Problem Statement**: Adapt quick sort for descending order by modifying partition function logic. Understanding how to reverse comparison operations in partitioning.

   **Interview Context**: "Modify quick sort for descending order. What changes are needed in the partition function?"

   **Example**: Sort array [6, 3, 7, 5, 2, 4] in descending order
   Output: `7 6 5 4 3 2`

5. **Search in Rotated Sorted Array** - Modified binary search

   **Problem Statement**: Search for target element in rotated sorted array using divide and conquer approach. Demonstrates binary search adaptation for modified array structures.

   **Interview Context**: "Search in rotated sorted array. How do you determine which half to search?"

   **Example**: Search for 0 in [4, 5, 6, 7, 0, 1, 2]
   Output: `idx: 4`