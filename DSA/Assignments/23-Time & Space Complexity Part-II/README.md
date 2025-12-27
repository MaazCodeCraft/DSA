# Assignment 23 - Time & Space Complexity Part-II

## Assignment Questions

1. **Nested Loop with Logarithmic Inner Loop** - Complex loop analysis

   **Problem Statement**: Analyze time complexity of nested loops where outer loop runs from n/2 to n and inner loop multiplies by 2 each iteration. This demonstrates combination of linear and logarithmic patterns.

   **Interview Context**: "Find the time complexity of this nested loop structure. How do you handle the logarithmic inner loop?"

   **Technical Details**:
   - Time Complexity: O(n log n) - linear outer loop with logarithmic inner loop
   - Outer Loop Analysis: Runs from n/2 to n (approximately n/2 iterations)
   - Inner Loop Analysis: j = 2, 4, 8, ..., n (log n iterations)
   - Total Operations: (n/2) × (log n) ≈ O(n log n)

   **Complexity Derivation**:
   - Outer loop: i = n/2 to n (runs n/2 times)
   - Inner loop: j = 2 to n with j *= 2 (runs log n times)
   - Total: (n/2) × (log n) = O(n log n)

   **Example**: Nested loop with exponential inner increment
   Output: `O(n log n) time complexity`

2. **Modified Loop with Multiplication** - Unusual loop pattern analysis

   **Problem Statement**: Analyze time complexity of loop where loop variable is multiplied by constant k in each iteration. This demonstrates how modification of loop variable affects iteration count.

   **Interview Context**: "What's the complexity when loop variable is multiplied instead of incremented? How does this affect total iterations?"

   **Technical Details**:
   - Time Complexity: O(log n) - logarithmic due to exponential growth
   - Loop Pattern: i = 0, 0×k, (0×k)×k, ... (geometric progression)
   - Special Case: Since i starts at 0, i×k remains 0
   - Actual Behavior: Loop runs only once due to i remaining 0

   **Complexity Analysis**:
   - Initial: i = 0
   - After multiplication: i = 0 × k = 0
   - Loop condition: i < n becomes 0 < n (always true initially)
   - Result: Infinite loop or single iteration depending on implementation

   **Example**: Loop with variable multiplication
   Output: `O(1) or infinite loop` (depends on initial value handling)

3. **Floor Square Root Algorithm** - Mathematical complexity analysis

   **Problem Statement**: Analyze time complexity of algorithm that finds floor of square root by incrementally checking perfect squares. This demonstrates square root complexity pattern.

   **Interview Context**: "Find complexity of this square root algorithm. How many iterations are needed to find √x?"

   **Technical Details**:
   - Time Complexity: O(√n) - square root of input value
   - Algorithm: Increment i until i² > x
   - Loop Iterations: Runs until i = √x approximately
   - Mathematical Bound: Loop terminates when i² exceeds x

   **Complexity Derivation**:
   - Loop condition: result = i² ≤ x
   - Termination: When i² > x, i.e., i > √x
   - Total iterations: √x iterations
   - Final complexity: O(√x)

   **Example**: Finding floor(√11)
   Output: `3` (since 3² = 9 ≤ 11 < 16 = 4²)

4. **Triangular Nested Loop Pattern** - Quadratic complexity with decreasing inner loop

   **Problem Statement**: Analyze time complexity of nested loops where inner loop runs from n down to i+1. This demonstrates classic quadratic pattern with triangular iteration count.

   **Interview Context**: "Calculate complexity for this triangular loop pattern. How do you sum the decreasing iterations?"

   **Technical Details**:
   - Time Complexity: O(n²) - quadratic due to nested structure
   - Outer Loop: i = 0 to n-1 (n iterations)
   - Inner Loop: j = n down to i+1 (decreasing iterations)
   - Total Operations: n + (n-1) + (n-2) + ... + 1 = n(n+1)/2

   **Complexity Derivation**:
   - For i = 0: inner loop runs n times
   - For i = 1: inner loop runs n-1 times
   - For i = n-1: inner loop runs 1 time
   - Sum: Σ(n-i) for i=0 to n-1 = n(n+1)/2 ≈ O(n²)

   **Example**: Triangular nested loop with decreasing inner iterations
   Output: `O(n²) time complexity`