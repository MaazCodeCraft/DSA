# Assignment 20 - Recursion Part-II

## Assignment Questions

1. **Binary Search** - Divide and conquer with recursion

   **Problem Statement**: Implement binary search algorithm using recursion on a sorted array. This demonstrates divide-and-conquer technique with logarithmic time complexity and recursive problem reduction.

   **Interview Context**: "Implement binary search recursively. How does recursion help in divide-and-conquer approach?"

   **Technical Details**:
   - Time Complexity: O(log n) - array is halved in each recursive call
   - Space Complexity: O(log n) - recursive call stack depth
   - Algorithm: Divide array into halves, recursively search appropriate half
   - Base Case: When start index exceeds end index, element not found

   **Recursive Logic**:
   - Compare target with middle element
   - If equal, return index
   - If target smaller, search left half recursively
   - If target larger, search right half recursively

   **Example**: Search for 4 in sorted array [1,2,3,4,5,6,7]
   Output: `3` (index of target element)

2. **Advanced Recursion Problem** - Complex recursive computation

   **Problem Statement**: Solve advanced recursive problem involving multiple recursive calls and complex state management. This demonstrates sophisticated recursive thinking and optimization techniques.

   **Interview Context**: "Solve this complex recursive problem. How do you manage multiple recursive states?"

   **Technical Details**:
   - Time Complexity: Varies based on problem structure
   - Space Complexity: O(n) - recursive call stack
   - Algorithm: Multi-branch recursion with state tracking
   - Optimization: Memoization potential for overlapping subproblems

   **Example**: Advanced recursive computation
   Output: `Complex recursive result`

3. **Count Substrings with Same Start and End** - String analysis with recursion

   **Problem Statement**: Count number of substrings that start and end with the same character using recursive approach. This demonstrates string processing with recursive enumeration and counting.

   **Interview Context**: "Count substrings with same start and end characters. How do you avoid counting duplicates?"

   **Technical Details**:
   - Time Complexity: O(2^n) - exponential due to multiple recursive branches
   - Space Complexity: O(n) - recursive call stack depth
   - Algorithm: Recursive enumeration with inclusion-exclusion principle
   - Pattern: Dynamic programming approach with overlapping subproblems

   **Recursive Strategy**:
   - Include/exclude characters from both ends
   - Count valid substrings recursively
   - Handle overlapping cases with inclusion-exclusion

   **Example**: Count substrings in "abcab" with same start and end
   Output: `7` (substrings: a, b, c, a, b, aba, abcab)

4. **Tower of Hanoi** - Classic recursive algorithm

   **Problem Statement**: Solve Tower of Hanoi problem using recursion to move n disks from source to destination using helper rod. This demonstrates classic divide-and-conquer recursion with multiple recursive calls.

   **Interview Context**: "Solve Tower of Hanoi problem. What's the recursive strategy and time complexity?"

   **Technical Details**:
   - Time Complexity: O(2^n) - exponential growth with number of disks
   - Space Complexity: O(n) - recursive call stack depth
   - Algorithm: Move n-1 disks to helper, move largest to destination, move n-1 from helper to destination
   - Mathematical: Minimum moves = 2^n - 1

   **Recursive Steps**:
   1. Move top n-1 disks from source to helper using destination
   2. Move largest disk from source to destination
   3. Move n-1 disks from helper to destination using source

   **Example**: Solve Tower of Hanoi for 4 disks from A to C using B as helper
   Output:
   ```
   transfer disk 1 from A to B
   transfer disk 2 from A to C
   transfer disk 1 from B to C
   transfer disk 3 from A to B
   transfer disk 1 from C to A
   transfer disk 2 from C to B
   transfer disk 1 from A to B
   transfer disk 4 from A to C
   ...
   ```