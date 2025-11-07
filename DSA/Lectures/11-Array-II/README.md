# 11 - Array-II

## Overview

Advanced array algorithms focusing on subarray problems, optimization techniques, and real-world applications. This module covers dynamic programming concepts, sliding window techniques, and algorithmic optimization strategies essential for competitive programming and technical interviews.

## Topics Covered

- Subarray generation and analysis
- Maximum subarray sum algorithms
- Kadane's Algorithm implementation
- Stock trading optimization problems
- Two-pointer technique applications
- Rainwater trapping algorithms
- Time and space complexity optimization

## Questions Solved

1. **Print All Subarrays** - Generate and display all possible subarrays

   **Problem Statement**: Given an array, generate and print all possible contiguous subarrays. This demonstrates nested loop patterns and helps understand subarray structure for optimization problems.

   **Interview Context**: "Generate all subarrays of an array. What's the total number of subarrays for an array of size n?"

   **Example**: Array = [1, 2, 3]
   Output: All subarrays from single elements to the complete array
   ```
   Subarrays: [1], [1,2], [1,2,3], [2], [2,3], [3]
   Total: 6 subarrays for array of size 3
   ```

2. **Maximum Subarray Sum (Brute Force)** - O(n³) approach for maximum sum

   **Problem Statement**: Find the contiguous subarray with the maximum sum using brute force approach. This generates all subarrays and calculates their sums to find the maximum.

   **Interview Context**: "Find the maximum sum of any contiguous subarray. Start with the brute force approach."

   **Example**: Array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
   Output: `Maximum subarray sum = 6` (subarray [4, -1, 2, 1])

3. **Maximum Subarray Sum (Optimized)** - O(n²) space-time optimization

   **Problem Statement**: Optimize the maximum subarray sum problem by eliminating redundant calculations. Use prefix sum technique to reduce one loop iteration.

   **Interview Context**: "Can you optimize the previous solution? How can we avoid recalculating sums?"

   **Example**: Same array with improved time complexity
   Output: `Maximum subarray sum = 6` with better performance

4. **Maximum Subarray Sum (Kadane's Algorithm)** - O(n) optimal solution

   **Problem Statement**: Implement Kadane's Algorithm for finding maximum subarray sum in linear time. This is the optimal solution using dynamic programming principles.

   **Interview Context**: "What's the most efficient way to solve maximum subarray sum? Explain Kadane's Algorithm."

   **Example**: Array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
   Output: `Maximum subarray sum = 6` in O(n) time

5. **Buy and Sell Stocks** - Single transaction profit maximization

   **Problem Statement**: Given stock prices over time, find the maximum profit from buying and selling once. This applies the concept of tracking minimum price and maximum profit.

   **Interview Context**: "You can buy and sell a stock once. When should you buy and sell to maximize profit?"

   **Example**: Prices = [7, 1, 5, 3, 6, 4]
   Output: `Maximum profit = 5` (buy at 1, sell at 6)

6. **Trapping Rainwater** - Calculate trapped water between elevations

   **Problem Statement**: Given elevation heights, calculate how much rainwater can be trapped. This uses the concept of finding water level at each position based on maximum heights on both sides.

   **Interview Context**: "Calculate trapped rainwater given elevation map. What determines water level at each position?"

   **Example**: Heights = [3, 0, 2, 0, 4]
   Output: `Total trapped water = 7 units`