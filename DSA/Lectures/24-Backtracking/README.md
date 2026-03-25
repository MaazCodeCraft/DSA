# 24 - Backtracking

## Overview

Backtracking is an algorithmic technique that considers searching every possible combination in order to solve a computational problem. It incrementally builds candidates to the solution and abandons a candidate ("backtracks") as soon as it determines the candidate cannot lead to a valid solution.

## Topics Covered

- Backtracking fundamentals and concepts
- Recursive state-space exploration
- Backtracking on arrays
- Subset generation using backtracking
- Permutation generation using backtracking
- N-Queens problem and constraint satisfaction
- Pruning and optimization in backtracking
- Time and space complexity of backtracking algorithms

## Questions Solved

1. **Backtracking on Array** - Understanding backtracking mechanics

   **Problem Statement**: Demonstrate how backtracking works by modifying an array during recursion and restoring it after the recursive call returns. This illustrates the core "undo" mechanism of backtracking.

   **Interview Context**: "Explain how backtracking differs from simple recursion. What is the significance of restoring state after a recursive call?"

   **Example**: Array modification and restoration during recursion
   Output: `Array state is restored after each recursive call`

2. **Find Subsets** - Subset generation using backtracking

   **Problem Statement**: Generate all possible subsets (power set) of a given array using backtracking. At each index, make a choice to include or exclude the element and recurse.

   **Interview Context**: "Generate all subsets of an array. How does backtracking help in exploring all include/exclude choices?"

   **Example**: Input: `[1, 2, 3]`
   Output: `[], [1], [1,2], [1,2,3], [1,3], [2], [2,3], [3]`

3. **Find Permutations** - Permutation generation using backtracking

   **Problem Statement**: Generate all permutations of a given array using backtracking. Swap elements to place each element at the current position, recurse, then swap back to restore state.

   **Interview Context**: "Generate all permutations of an array. How do you ensure each element appears exactly once in each permutation?"

   **Example**: Input: `[1, 2, 3]`
   Output: `[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,2,1], [3,1,2]`

4. **N-Queens Problem** - Constraint satisfaction with backtracking

   **Problem Statement**: Place N queens on an N×N chessboard such that no two queens attack each other. A queen attacks another if they share the same row, column, or diagonal. Use backtracking to explore valid placements and prune invalid ones.

   **Interview Context**: "Solve the N-Queens problem. How do you check if a queen placement is safe and how does backtracking help explore all configurations?"

   **Example**: Input: `N = 4`
   Output: `2 valid configurations` (queens placed safely on 4×4 board)
