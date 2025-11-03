# Assignment 10 - Array-I

## Questions Solved

1. **Sum and Product Calculator** - Calculate sum and product of array elements

   **Problem Statement**: Given an array of integers, calculate both the sum and product of all elements in a single traversal. This tests understanding of array iteration and accumulator variables.

   **Interview Context**: "Write a function to calculate both sum and product of array elements efficiently. How would you handle potential integer overflow in the product calculation?"

   **Technical Details**:

   - Time Complexity: O(n) - single pass through array
   - Space Complexity: O(1) - only using two variables
   - Edge Cases: Empty array, negative numbers, zeros in array

   **Example**: Array = [1, 2, 3, 4, 5]
   Output:

   ```
   sum = 15
   product = 120
   ```

2. **Swap Maximum and Minimum Elements** - Find and swap extreme values

   **Problem Statement**: Locate the maximum and minimum elements in an array and swap their positions. This combines searching algorithms with array manipulation techniques.

   **Interview Context**: "Find the maximum and minimum elements in an array and swap them. What if there are multiple occurrences of max/min values?"

   **Technical Details**:

   - Time Complexity: O(n) - single pass to find max/min indices
   - Space Complexity: O(1) - in-place swapping
   - Algorithm: Linear search for extremes + swap operation
   - Note: Code has a bug - should compare arr[i] with arr[maxIndex], not maxIndex

   **Example**: Array = [1, 2, 3, 4, 5] (after fixing the bug)
   Expected Output: `5 2 3 4 1` (swapping positions of 1 and 5)

3. **Find Unique Elements** - Identify non-duplicate elements

   **Problem Statement**: Given an array with duplicate elements, find and print all unique elements (elements that appear exactly once). This tests nested loop logic and duplicate detection.

   **Interview Context**: "Find all unique elements in an array. Can you optimize this solution? What about using hash maps or sorting?"

   **Technical Details**:

   - Time Complexity: O(n²) - nested loops for comparison
   - Space Complexity: O(1) - no extra space for storage
   - Alternative approaches: Hash map O(n) time, Sorting + single pass O(n log n)
   - Handles duplicates by checking all other positions

   **Example**: Array = [1, 2, 3, 1, 2, 3, 4]
   Output: `4` (only 4 appears once)

4. **Array Intersection** - Find common elements between two arrays

   **Problem Statement**: Given two arrays, find and print all elements that exist in both arrays. This is a fundamental set operation implemented with arrays.

   **Interview Context**: "Find the intersection of two arrays. How would you handle duplicates? Can you optimize for sorted arrays?"

   **Technical Details**:

   - Time Complexity: O(n₁ × n₂) - nested loops
   - Space Complexity: O(1) - no extra storage
   - Optimization possibilities: Hash set O(n₁ + n₂), Two pointers for sorted arrays
   - Current implementation may print duplicates from first array

   **Example**: Array1 = [1, 2, 3, 4, 5], Array2 = [1, 2, 5, 9]
   Output: `1 2 5` (common elements)

5. **Minimum Coin Change Problem** - Greedy algorithm for coin change

   **Problem Statement**: Given an array of coin denominations and a target amount, find the minimum number of coins needed to make that amount using a greedy approach. Return -1 if impossible.

   **Interview Context**: "Implement the coin change problem using greedy algorithm. When does greedy approach work for coin change? What are the limitations?"

   **Technical Details**:

   - Time Complexity: O(amount/min_coin) - depends on amount and smallest denomination
   - Space Complexity: O(1) - only counter variable
   - Algorithm: Greedy approach (largest denomination first)
   - Limitation: Only works for canonical coin systems
   - Note: Array should be sorted in ascending order for this implementation

   **Example**: Coins = [2, 5], Amount = 3
   Output: `Not possible` (cannot make 3 with coins 2 and 5)

   **Alternative Example**: Coins = [1, 5, 10, 25], Amount = 30
   Expected Output: `2` (one 25-cent coin + one 5-cent coin)
