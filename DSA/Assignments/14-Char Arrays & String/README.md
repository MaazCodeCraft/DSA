# Assignment 14 - Char Arrays & String

## Assignment Questions

1. **Vowel Counter in String** - Count total vowels in a given string

   **Problem Statement**: Given a string, count the total number of vowels (a, e, i, o, u) present in it. This demonstrates string traversal and conditional counting for character classification.

   **Interview Context**: "Count vowels in a string. How would you handle both uppercase and lowercase vowels? What about Unicode characters?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass through string
   - Space Complexity: O(1) - constant extra space
   - Algorithm: Linear traversal with vowel checking
   - Enhancement: Can be extended for case-insensitive counting

   **Example**: String = "maaz ur rahman"
   Output: `total vowel count = 5` (a, a, u, a, a)

2. **Almost Equal Strings Checker** - Determine if strings can be made equal with at most one swap

   **Problem Statement**: Check if two strings can be made equal by swapping at most one pair of characters in one of the strings. This tests string comparison and character position analysis.

   **Interview Context**: "Check if two strings are almost equal with one swap. How do you handle edge cases like identical strings or strings with multiple differences?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass comparison
   - Space Complexity: O(1) - only storing difference positions
   - Algorithm: Track character differences and validate swap possibility
   - Edge Cases: Identical strings, single difference, multiple differences

   **Example**: Strings = "bank" and "kanb"
   Output: `true` (swap 'b' and 'k' positions to make them equal)