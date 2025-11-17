# Assignment 15 - Vectors

## Assignment Questions

1. **Predict the Output** - Understanding vector size and capacity behavior

   **Problem Statement**: Analyze vector growth pattern and predict the output when elements are added using push_back. This demonstrates understanding of vector's internal memory management and capacity doubling strategy.

   **Interview Context**: "What will be the size and capacity of a vector after adding 5 elements? How does vector capacity grow?"

   **Technical Details**:
   - Time Complexity: O(1) amortized for push_back operations
   - Space Complexity: O(n) for storing elements
   - Algorithm: Vector capacity doubling when size exceeds current capacity
   - Key Concept: Understanding difference between size and capacity

   **Example**: Adding elements 0 to 4 to empty vector
   Output: 
   ```
   5
   8
   ```

2. **Find Error Numbers** - Identify duplicate and missing number in array

   **Problem Statement**: Given an array of n integers where numbers should be from 1 to n, but one number appears twice and another is missing. Find both the duplicate and missing numbers using vector-based approach.

   **Interview Context**: "Find the duplicate and missing number in an array. How would you solve this efficiently using extra space?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass through array
   - Space Complexity: O(n) - boolean array for tracking presence
   - Algorithm: Use boolean vector to mark presence and identify duplicate/missing
   - Enhancement: Can be solved in O(1) space using mathematical approach

   **Example**: Array = [1, 2, 2, 4] (missing 3, duplicate 2)
   Output: `[2,3,]` (duplicate first, then missing)

3. **Container With Most Water** - Two-pointer technique for area maximization

   **Problem Statement**: Given an array of heights representing vertical lines, find two lines that together with x-axis forms a container that holds the most water. Use two-pointer technique for optimal solution.

   **Interview Context**: "Find the maximum area that can be formed by two vertical lines. Can you solve it in O(n) time?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass with two pointers
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Two-pointer approach moving from ends towards center
   - Key Insight: Move pointer with smaller height to potentially find larger area

   **Example**: Heights = [1,8,6,2,5,4,8,3,7]
   Output: `49` (maximum water that can be contained)