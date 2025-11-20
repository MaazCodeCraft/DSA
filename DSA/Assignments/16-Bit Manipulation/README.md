# Assignment 16 - Bit Manipulation

## Assignment Questions

1. **Predict the Output** - Understanding bitwise NOT and right shift operations

   **Problem Statement**: Analyze the output of bitwise NOT operator and right shift operation. This demonstrates understanding of two's complement representation and shift operator behavior.

   **Interview Context**: "What will be the output of ~4 and 8 >> 1? How does the NOT operator work with signed integers?"

   **Technical Details**:
   - Time Complexity: O(1) - constant time operations
   - Space Complexity: O(1) - no extra space required
   - Algorithm: Bitwise operations are fundamental processor instructions
   - Key Concept: Understanding two's complement and binary representation

   **Example**: Operations ~4 and 8 >> 1
   Output: 
   ```
   -5
   4
   ```

2. **Update ith Bit** - Modify specific bit to given value

   **Problem Statement**: Update the ith bit of a number to a specified value (0 or 1). This combines bit clearing and setting operations to achieve bit modification.

   **Interview Context**: "How do you update a specific bit to any value? What's the two-step process involved?"

   **Technical Details**:
   - Time Complexity: O(1) - constant time bit operations
   - Space Complexity: O(1) - in-place bit manipulation
   - Algorithm: First clear the bit, then set it to desired value
   - Enhancement: Can be optimized to single operation using conditional logic

   **Example**: Update 3rd bit of 7 to 1 (binary: 0111 → 1111)
   Output: `15`

3. **Clear Last i Bits** - Clear multiple bits from right

   **Problem Statement**: Clear the last i bits of a number (set them to 0). This demonstrates creating masks for multiple bit operations and understanding bit range manipulation.

   **Interview Context**: "How do you clear the last i bits of a number? What mask would you create?"

   **Technical Details**:
   - Time Complexity: O(1) - single mask operation
   - Space Complexity: O(1) - constant space for mask
   - Algorithm: Create mask with 1s in positions to keep, 0s in positions to clear
   - Key Insight: Use left shift to create appropriate mask pattern

   **Example**: Clear last 2 bits of 15 (binary: 1111 → 1100)
   Output: `12`

4. **Clear Bits in Range** - Clear bits between two positions

   **Problem Statement**: Clear all bits in a given range [i, j] of a number. This involves creating complex bit masks to preserve bits outside the range while clearing bits within the range.

   **Interview Context**: "Clear bits from position i to j. How do you create a mask that preserves bits outside this range?"

   **Technical Details**:
   - Time Complexity: O(1) - mask creation and application
   - Space Complexity: O(1) - constant space for mask operations
   - Algorithm: Create two masks and combine them using OR operation
   - Complexity: Requires understanding of bit positioning and mask combination

   **Example**: Clear bits 1 to 3 in 15 (binary: 1111 → 0001)
   Output: `1`

5. **Single Number** - Find unique element using XOR

   **Problem Statement**: Given an array where every element appears twice except one, find the single element using XOR properties. This demonstrates XOR's self-canceling property for duplicate detection.

   **Interview Context**: "Find the single number in an array where all others appear twice. Can you solve it in O(n) time and O(1) space?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass through array
   - Space Complexity: O(1) - only using XOR accumulator
   - Algorithm: XOR all elements; duplicates cancel out, single remains
   - Mathematical Property: a ⊕ a = 0, a ⊕ 0 = a

   **Example**: Array = [1, 2, 2] (1 appears once, 2 appears twice)
   Output: `1`

6. **XOR Beauty** - Complex XOR and OR operations

   **Problem Statement**: Calculate XOR beauty of an array by finding OR of all elements, XOR of all elements, then AND of these results. This demonstrates combining multiple bitwise operations for complex calculations.

   **Interview Context**: "Calculate the XOR beauty using OR, XOR, and AND operations. How do these operations interact?"

   **Technical Details**:
   - Time Complexity: O(n) - single pass for OR and XOR calculations
   - Space Complexity: O(1) - constant space for accumulators
   - Algorithm: Calculate OR and XOR separately, then apply AND
   - Pattern Recognition: Understanding how different bitwise operations combine

   **Example**: Array = [1, 4] (OR = 5, XOR = 5, AND = 5)
   Output: `5`