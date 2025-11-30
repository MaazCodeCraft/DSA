# 19 - Recursion Part-I

## Overview

Introduction to recursion - a fundamental programming technique where functions call themselves to solve problems. This module covers basic recursive concepts, base cases, recursive relations, and common recursive algorithms essential for problem-solving and algorithm design.

## Topics Covered

- Recursion fundamentals and concepts
- Base case and recursive case design
- Stack overflow and memory management
- Mathematical recursion (factorial, fibonacci)
- Array processing with recursion
- Search algorithms using recursion
- Power calculation optimization
- Recursive problem-solving patterns

## Questions Solved

1. **Factorial Recursion** - Classic mathematical recursion

   **Problem Statement**: Calculate factorial of a number using recursive approach. Understanding base case (n=0 returns 1) and recursive relation (n * factorial(n-1)) for mathematical computations.

   **Interview Context**: "Calculate factorial using recursion. What's the base case and how does the recursion work?"

   **Example**: Calculate factorial of 5
   Output: `120`

2. **Print Numbers in Decreasing Order** - Simple recursive printing

   **Problem Statement**: Print numbers from n to 1 using recursion. Demonstrates basic recursive structure with decreasing parameter and simple output operation.

   **Interview Context**: "Print numbers in decreasing order using recursion. How do you ensure the recursion terminates?"

   **Example**: Print from 5 to 1
   Output:
   ```
   5
   4
   3
   2
   1
   ```

3. **Print Numbers in Non-Decreasing Order** - Recursive printing with delayed output

   **Problem Statement**: Print numbers from 1 to n using recursion by making recursive call first, then printing. Understanding call stack and execution order in recursion.

   **Interview Context**: "Print numbers in increasing order using recursion. How does the call stack affect output order?"

   **Example**: Print from 1 to 5
   Output:
   ```
   1
   2
   3
   4
   5
   ```

4. **Stack Overflow** - Understanding recursion limits

   **Problem Statement**: Demonstrate stack overflow condition when recursion lacks proper base case or uses excessive memory. Understanding recursion limitations and memory management.

   **Interview Context**: "What causes stack overflow in recursion? How do you prevent it?"

   **Example**: Infinite recursion without base case
   Output: `Function call.... (repeated until stack overflow)`

5. **Sum of N Natural Numbers** - Mathematical recursion

   **Problem Statement**: Calculate sum of first n natural numbers using recursion. Demonstrates recursive mathematical computation with proper base case and recursive relation.

   **Interview Context**: "Calculate sum of natural numbers using recursion. What's more efficient - recursion or iteration?"

   **Example**: Sum of first 5 natural numbers
   Output: `15`

6. **Nth Fibonacci** - Classic recursive sequence

   **Problem Statement**: Calculate nth Fibonacci number using recursion. Understanding multiple recursive calls and exponential time complexity in naive recursive approach.

   **Interview Context**: "Calculate Fibonacci number using recursion. What's the time complexity and how can you optimize it?"

   **Example**: Calculate 3rd Fibonacci number
   Output: `2`

7. **Check if Array is Sorted** - Array processing with recursion

   **Problem Statement**: Check if an array is sorted in ascending order using recursion. Demonstrates array traversal with recursive approach and boolean return values.

   **Interview Context**: "Check if array is sorted using recursion. How do you handle array indices in recursive calls?"

   **Example**: Check sorted and unsorted arrays
   Output:
   ```
   true
   false
   ```

8. **First Occurrence** - Search algorithm with recursion

   **Problem Statement**: Find first occurrence of target element in array using recursion. Understanding linear search with recursive implementation and index tracking.

   **Interview Context**: "Find first occurrence using recursion. How do you handle the case when element is not found?"

   **Example**: Find first occurrence of target in array
   Output: `Index of first occurrence or -1 if not found`

9. **Power Calculation O(log n)** - Optimized recursive exponentiation

   **Problem Statement**: Calculate x^n efficiently using recursive approach with logarithmic time complexity. Understanding divide-and-conquer technique for optimization.

   **Interview Context**: "Calculate power efficiently using recursion. How do you achieve O(log n) complexity?"

   **Example**: Calculate optimized power
   Output: `Efficient power calculation result`