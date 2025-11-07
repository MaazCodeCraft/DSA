# Assignment 11 - Array-II

## Questions Solved

1. **Contains Duplicate Checker** - Check if all elements have duplicates

   **Problem Statement**: Given an array, determine if every element in the array has at least one duplicate. Return true only if all elements appear more than once in the array.

   **Interview Context**: "Check if an array contains all duplicate elements. How would you optimize this for better time complexity?"

   **Technical Details**:
   - Time Complexity: O(n²) - nested loops for comparison
   - Space Complexity: O(1) - no extra space used
   - Algorithm: For each element, check if it has duplicates in the array
   - Optimization: Could use hash set for O(n) time complexity

   **Example**: Array = [1, 2, 1, 3, 5, 3, 2]
   Output: `false` (element 5 has no duplicate)

2. **Binary Search in Rotated Sorted Array** - Search in rotated array

   **Problem Statement**: Given a rotated sorted array and a target value, find the index of the target using binary search. The array was originally sorted but rotated at some pivot point.

   **Interview Context**: "How do you perform binary search on a rotated sorted array? What's the key insight for determining which half to search?"

   **Technical Details**:
   - Time Complexity: O(log n) - modified binary search
   - Space Complexity: O(1) - constant space
   - Algorithm: Determine which half is sorted, then decide search direction
   - Key insight: At least one half is always sorted in rotated array

   **Example**: Array = [4, 5, 6, 7, 0, 1, 2], Target = 8
   Output: `-1` (target not found)

3. **Maximum Product Subarray** - Find maximum product of contiguous elements

   **Problem Statement**: Given an array of integers, find the contiguous subarray that has the largest product. Handle negative numbers and zeros appropriately.

   **Interview Context**: "Find maximum product subarray. How do negative numbers affect the approach compared to maximum sum subarray?"

   **Technical Details**:
   - Time Complexity: O(n) - two passes through array
   - Space Complexity: O(1) - constant space
   - Algorithm: Forward and backward passes to handle negative numbers
   - Key insight: Negative numbers can make small products large

   **Example**: Array = [2, 3, -2, 4]
   Output: `Maximum Product = 6` (subarray [2, 3])