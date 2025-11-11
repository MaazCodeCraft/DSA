# Assignment 13 - 2D Arrays

## Assignment Questions

1. **Count Specific Element in Matrix** - Count occurrences of target element

   **Problem Statement**: Given a 2D array, count how many times a specific element (7) appears in the matrix. This demonstrates basic matrix traversal and conditional counting.

   **Interview Context**: "Count occurrences of a specific element in a 2D array. How would you optimize this for multiple queries?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element once
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Nested loop traversal with conditional counting
   - Application: Frequency analysis in matrices

   **Example**: Matrix = [[4,7,8], [8,8,7]]
   Output: `Count of 7 = 2`

2. **Second Row Sum Calculator** - Calculate sum of specific row

   **Problem Statement**: Calculate the sum of elements in the second row (index 1) of a given matrix. This demonstrates row-specific operations and array indexing.

   **Interview Context**: "Calculate sum of a specific row in a matrix. How would you generalize this for any row?"

   **Technical Details**:
   - Time Complexity: O(m) - traverse one row only
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Single loop through specified row
   - Optimization: Direct row access instead of full matrix traversal

   **Example**: Matrix = [[4,7,8], [11,4,3], [2,2,3]]
   Output: `Sum of 2nd Row = 18` (11+4+3)

3. **Matrix Transpose** - Convert rows to columns and vice versa

   **Problem Statement**: Create the transpose of a given matrix where rows become columns and columns become rows. This demonstrates matrix transformation and memory allocation.

   **Interview Context**: "Implement matrix transpose. How do you handle non-square matrices? Can you do it in-place?"

   **Technical Details**:
   - Time Complexity: O(n×m) - visit each element once
   - Space Complexity: O(n×m) - create new matrix for result
   - Algorithm: Swap row and column indices during copying
   - Matrix Dimensions: Original (n×m) becomes (m×n)

   **Example**: Matrix = [[4,7,8], [11,4,3]] (2×3)
   Output: 
   ```
   4 11
   7 4
   8 3
   ```
   (Transpose: 3×2 matrix)