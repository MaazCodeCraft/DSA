# Assignment 21 - Divide & Conquer

## Assignment Questions

1. **Merge Step Implementation** - Core merge function for divide and conquer

   **Problem Statement**: Implement the merge step of merge sort algorithm that combines two sorted subarrays into a single sorted array. This demonstrates the "conquer" phase of divide and conquer methodology.

   **Interview Context**: "Implement the merge function for merge sort. How do you efficiently combine two sorted arrays?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass through both subarrays
   - Space Complexity: O(n) - temporary array for merging
   - Algorithm: Two-pointer technique to merge sorted subarrays
   - Stability: Maintains relative order of equal elements

   **Merge Process**:
   - Compare elements from both subarrays
   - Add smaller element to temporary array
   - Handle remaining elements from either subarray
   - Copy merged result back to original array

   **Example**: Merge two sorted halves of an array
   Output: `Properly merged sorted array`

2. **Conquer Step Implementation** - Divide phase of merge sort

   **Problem Statement**: Implement the conquer step that recursively divides the array into smaller subarrays until base case is reached. This demonstrates the "divide" phase of the algorithm.

   **Interview Context**: "Implement the recursive division in merge sort. How do you handle the base case?"

   **Technical Details**:
   - Time Complexity: O(log n) - recursive depth
   - Space Complexity: O(log n) - recursive call stack
   - Algorithm: Recursive division with midpoint calculation
   - Base Case: Single element or empty subarray

   **Division Strategy**:
   - Calculate midpoint to divide array
   - Recursively sort left half
   - Recursively sort right half
   - Merge the sorted halves

   **Example**: Recursive division of array into subarrays
   Output: `Systematic array division for sorting`

3. **Merge Sort for String Array** - Sorting non-numeric data types

   **Problem Statement**: Apply merge sort algorithm to sort an array of strings in lexicographic order. This demonstrates algorithm generalization for different data types using string comparison.

   **Interview Context**: "Sort strings using merge sort. How does string comparison work in sorting algorithms?"

   **Technical Details**:
   - Time Complexity: O(n log n) - same as numeric merge sort
   - Space Complexity: O(n) - temporary string array for merging
   - Algorithm: Standard merge sort with string comparison operators
   - Lexicographic Order: Dictionary-style alphabetical ordering

   **String Comparison**:
   - Use built-in string comparison operators
   - Lexicographic ordering (dictionary order)
   - Case-sensitive comparison by default
   - Efficient string handling in merge process

   **Example**: Sort ["sun", "earth", "mars", "mercury"]
   Output: `earth mars mercury sun`