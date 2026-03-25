# Assignment 24 - Backtracking

## Assignment Questions

1. **Rat in a Maze** - Path finding using backtracking

   **Problem Statement**: Given an N×N maze where 1 represents an open path and 0 represents a wall, find all paths from the top-left cell (0,0) to the bottom-right cell (N-1, N-1). The rat can move in all four directions: Up, Down, Left, Right.

   **Interview Context**: "Find all paths in a maze from source to destination. How do you avoid revisiting cells and how does backtracking help explore all valid paths?"

   **Technical Details**:
   - Mark cell as visited before recursing, unmark after returning (backtrack)
   - Valid moves: Up (U), Down (D), Left (L), Right (R)
   - Pruning: Skip cells that are walls (0) or already visited
   - Collect path string at destination

   **Complexity Analysis**:
   - Time Complexity: O(4^(N²)) - at each cell, 4 choices
   - Space Complexity: O(N²) - recursion stack and visited array

   **Example**: Input: `maze = [[1,0,0,0],[1,1,0,1],[1,1,0,0],[0,1,1,1]]`, N = 4
   Output: `DDRDRR DRDDRR` (all valid paths from (0,0) to (3,3))
