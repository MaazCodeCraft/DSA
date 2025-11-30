# Assignment 19 - Recursion Part-I

## Assignment Questions

1. **Last Occurrence** - Advanced recursive search

   **Problem Statement**: Find the last occurrence of a target element in an array using recursion. This demonstrates backward traversal logic in recursion and handling multiple occurrences of the same element.

   **Interview Context**: "Find last occurrence using recursion. How do you ensure you get the rightmost occurrence?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass through array with recursive calls
   - Space Complexity: O(n) - recursive call stack depth
   - Algorithm: Recursive traversal with post-order checking
   - Key Insight: Check recursive result first, then current element

   **Recursive Logic**:
   - Base Case: When index reaches array size, return -1
   - Recursive Case: Get result from remaining array, check current element if no result found
   - Return Strategy: Propagate found index or check current position

   **Example**: Array = [1, 2, 3, 3, 4, 5], Target = 3
   Output: `3` (index of last occurrence of 3)

2. **Power Calculation O(n)** - Linear time recursive exponentiation

   **Problem Statement**: Calculate x^n using simple recursive approach with linear time complexity. This demonstrates basic recursive mathematical computation without optimization.

   **Interview Context**: "Calculate power using basic recursion. What's the time complexity and how does it compare to iterative approach?"

   **Technical Details**:
   - Time Complexity: O(n) - n recursive calls for power n
   - Space Complexity: O(n) - recursive call stack depth
   - Algorithm: Simple recursive multiplication with base case
   - Base Case: When exponent is 0, return 1
   - Recursive Relation: x * power(x, n-1)

   **Mathematical Foundation**:
   - x^0 = 1 (base case)
   - x^n = x * x^(n-1) (recursive relation)
   - Linear approach: multiply x exactly n times

   **Example**: Calculate 2^10
   Output: `1024`