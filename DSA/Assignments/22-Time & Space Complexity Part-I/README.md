# Assignment 22 - Time & Space Complexity Part-I

## Assignment Questions

1. **Nested Loop Complexity Analysis** - Quadratic time complexity with variable bounds

   **Problem Statement**: Analyze time complexity of nested loops where inner loop runs from i+1 to n. This demonstrates quadratic complexity analysis with arithmetic progression and mathematical derivation.

   **Interview Context**: "Analyze this nested loop structure. What's the time complexity and how do you calculate it?"

   **Technical Details**:
   - Time Complexity: O(n²) - quadratic growth pattern
   - Mathematical Analysis: Arithmetic progression sum formula
   - Loop Structure: Outer loop n times, inner loop decreasing iterations
   - Total Operations: (n-1) + (n-2) + ... + 1 + 0 = n(n-1)/2

   **Complexity Derivation**:
   - Outer loop: i = 0 to n-1
   - Inner loop: j = i+1 to n
   - Total iterations: Σ(n-i-1) for i=0 to n-1
   - Simplified: n(n-1)/2 ≈ O(n²)

   **Example**: Nested loop with decreasing inner iterations
   Output: `O(n²) time complexity`

2. **Triangular Loop Pattern** - Lower triangular complexity analysis

   **Problem Statement**: Analyze time complexity of nested loops where inner loop runs from 0 to i. This demonstrates another quadratic pattern with increasing inner loop iterations.

   **Interview Context**: "Calculate complexity for this triangular loop pattern. How does it compare to the previous example?"

   **Technical Details**:
   - Time Complexity: O(n²) - same quadratic growth despite different pattern
   - Mathematical Analysis: Sum of first (n-1) natural numbers
   - Loop Structure: Outer loop n times, inner loop increasing iterations
   - Total Operations: 0 + 1 + 2 + ... + (n-2) = (n-1)(n-2)/2

   **Complexity Derivation**:
   - Outer loop: i = 0 to n-1
   - Inner loop: j = 0 to i-1
   - Total iterations: Σi for i=0 to n-1
   - Simplified: (n-1)(n-2)/2 ≈ O(n²)

   **Example**: Triangular nested loop pattern
   Output: `O(n²) time complexity`

3. **Step-wise Loop Analysis** - Linear complexity with constant step

   **Problem Statement**: Analyze time complexity of nested loops where outer loop increments by constant k and inner loop runs constant times. This demonstrates how step size affects overall complexity.

   **Interview Context**: "What's the complexity when outer loop increments by k instead of 1? How does constant step size affect analysis?"

   **Technical Details**:
   - Time Complexity: O(n) - linear despite nested structure
   - Mathematical Analysis: Outer loop runs n/k times, inner loop k times
   - Loop Structure: Outer loop with step k, inner loop constant iterations
   - Total Operations: (n/k) × k = n operations

   **Complexity Derivation**:
   - Outer loop: i = 0 to n with step k (runs n/k times)
   - Inner loop: j = 0 to k (runs k+1 times ≈ k)
   - Total iterations: (n/k) × k = n
   - Final complexity: O(n)

   **Example**: Step-wise nested loop with constant inner iterations
   Output: `O(n) time complexity`