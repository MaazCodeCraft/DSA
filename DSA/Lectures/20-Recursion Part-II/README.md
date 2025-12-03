# 20 - Recursion Part-II

## Overview

Advanced recursion techniques and complex recursive problem-solving patterns. This module covers dynamic programming foundations, string manipulation with recursion, combinatorial problems, and advanced recursive algorithms essential for competitive programming and algorithm design.

## Topics Covered

- Dynamic programming with recursion
- String processing and manipulation
- Combinatorial problem solving
- Pattern generation with constraints
- Advanced recursive relations
- Optimization techniques in recursion
- Complex recursive data structures
- Mathematical recursion patterns

## Questions Solved

1. **Tiling Problem** - Dynamic programming with recursion

   **Problem Statement**: Find number of ways to tile a 2×n board with 1×2 tiles. This demonstrates classic dynamic programming problem using recursion with overlapping subproblems and optimal substructure.

   **Interview Context**: "How many ways can you tile a 2×n board with 1×2 tiles? What's the recursive relation?"

   **Example**: Calculate ways to tile 2×4 board
   Output: `5`

2. **Remove Duplicates in String** - String manipulation with recursion

   **Problem Statement**: Remove duplicate characters from a string using recursion with character mapping. Demonstrates string processing, character tracking, and recursive string building techniques.

   **Interview Context**: "Remove duplicates from string using recursion. How do you track which characters you've seen?"

   **Example**: Remove duplicates from "appnnacollege"
   Output: `ans 1 : apncolge`

3. **Friends Pairing Problem** - Combinatorial recursion

   **Problem Statement**: Find number of ways n friends can remain single or pair up. Each friend can either stay single or pair with any other unpaired friend, demonstrating combinatorial recursion.

   **Interview Context**: "How many ways can n friends pair up or stay single? What's the recursive formula?"

   **Example**: Calculate pairing ways for 4 friends
   Output: `10`

4. **Binary String Problem** - Constrained pattern generation

   **Problem Statement**: Generate all binary strings of length n with no consecutive 1s. This demonstrates constraint-based recursion and pattern generation with conditional branching.

   **Interview Context**: "Generate binary strings with no consecutive 1s. How do you handle the constraint recursively?"

   **Example**: Generate binary strings of length 3 with no consecutive 1s
   Output:
   ```
   000
   001
   010
   100
   101
   ```