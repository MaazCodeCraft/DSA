# 16 - Bit Manipulation

## Overview

Understanding bitwise operations and bit manipulation techniques in C++. This module covers fundamental bitwise operators, bit-level algorithms, and optimization techniques using binary operations for efficient problem solving.

## Topics Covered

- Bitwise operators (AND, OR, XOR, NOT)
- Binary shift operations (left shift, right shift)
- Bit manipulation techniques
- Individual bit operations (get, set, clear)
- Power of 2 checking algorithms
- Bit counting algorithms
- Fast exponentiation using bit manipulation

## Questions Solved

1. **Bitwise Operators** - Understanding AND, OR, XOR operations

   **Problem Statement**: Demonstrate basic bitwise operations including AND (&), OR (|), and XOR (^) operators. Understanding binary representation and how bitwise operations work at bit level.

   **Interview Context**: "Explain bitwise operators. How do AND, OR, and XOR operations work on binary numbers?"

   **Example**: Operations on 5 and 3
   Output: 
   ```
   1
   7
   6
   ```

2. **Binary NOT Operator** - Understanding bitwise complement

   **Problem Statement**: Explore the bitwise NOT operator (~) and its behavior with different data types. Understanding two's complement representation and sign bit handling.

   **Interview Context**: "What does the bitwise NOT operator do? How does it handle signed integers?"

   **Example**: NOT operation on 4
   Output: `-5`

3. **Binary Shift Operators** - Left and right shift operations

   **Problem Statement**: Demonstrate left shift (<<) and right shift (>>) operators for efficient multiplication and division by powers of 2. Understanding bit shifting mechanics and overflow behavior.

   **Interview Context**: "How do shift operators work? What's the relationship between shifting and multiplication/division?"

   **Example**: Shift operations
   Output:
   ```
   20
   2
   ```

4. **Even/Odd Check Using Bits** - Efficient parity checking

   **Problem Statement**: Check if a number is even or odd using bitwise AND operation with 1. Demonstrate bit-level optimization for common mathematical operations.

   **Interview Context**: "Check if a number is even or odd using bit manipulation. Why is this more efficient?"

   **Example**: Check 15 and 10
   Output:
   ```
   15 is odd
   10 is even
   ```

5. **Get ith Bit** - Extract specific bit from number

   **Problem Statement**: Extract the value of ith bit from a given number using bit masking technique. Understanding bit positioning and mask creation for bit extraction.

   **Interview Context**: "How do you get the value of a specific bit in a number? Explain the bit masking technique."

   **Example**: Get 3rd bit of 15 (binary: 1111)
   Output: `1`

6. **Set ith Bit** - Set specific bit to 1

   **Problem Statement**: Set the ith bit of a number to 1 using bitwise OR operation with appropriate bit mask. Demonstrate bit manipulation for setting individual bits.

   **Interview Context**: "How do you set a specific bit to 1? What bitwise operation would you use?"

   **Example**: Set 2nd bit of 5 (binary: 101 → 111)
   Output: `7`

7. **Clear ith Bit** - Clear specific bit to 0

   **Problem Statement**: Clear the ith bit of a number (set to 0) using bitwise AND operation with inverted bit mask. Understanding bit clearing techniques.

   **Interview Context**: "How do you clear a specific bit? Explain the mask creation process."

   **Example**: Clear 2nd bit of 7 (binary: 111 → 011)
   Output: `3`

8. **Check Power of 2** - Efficient power of 2 detection

   **Problem Statement**: Check if a number is a power of 2 using the bit manipulation trick (n & (n-1)) == 0. Understanding binary properties of powers of 2.

   **Interview Context**: "Check if a number is power of 2 using bit manipulation. What's the mathematical property behind this?"

   **Example**: Check 32 and 31
   Output:
   ```
   true
   false
   ```

9. **Count Set Bits** - Count number of 1s in binary representation

   **Problem Statement**: Count the number of set bits (1s) in the binary representation of a number using bit manipulation techniques. Understanding bit counting algorithms.

   **Interview Context**: "Count the number of 1s in binary representation. What are different approaches to solve this?"

   **Example**: Count set bits in 10 (binary: 1010)
   Output: `2`

10. **Fast Exponentiation** - Efficient power calculation using bits

    **Problem Statement**: Calculate x^n efficiently using binary exponentiation technique. Understanding how to use bit representation of exponent for optimization.

    **Interview Context**: "Calculate power efficiently in O(log n) time. How does binary exponentiation work?"

    **Example**: Calculate 3^5
    Output: `243`