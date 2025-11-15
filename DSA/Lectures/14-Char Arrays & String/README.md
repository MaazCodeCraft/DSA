# 14 - Char Arrays & String

## Overview

Understanding character arrays, string manipulation, and string processing algorithms in C++. This module covers fundamental string operations essential for text processing and algorithm implementation.

## Topics Covered

- Character array creation and initialization
- String input/output operations
- Case conversion algorithms
- String reversal and palindrome checking
- C-style string functions
- C++ string class operations
- String comparison and manipulation

## Questions Solved

1. **Character Array Creation** - Different methods to create and initialize character arrays

   **Problem Statement**: Demonstrate various ways to create character arrays including string literals, character initialization, and null termination. Understanding memory allocation and string length calculation.

   **Interview Context**: "How do you create character arrays in C++? What's the difference between string literals and character arrays?"

   **Example**: Different initialization methods
   Output: 
   ```
   code
   4
   code
   4
   code
   4
   code
   4
   ```

2. **Character Array Input** - Reading single words and complete sentences

   **Problem Statement**: Handle different types of string input including single words and sentences with spaces. Demonstrate buffer management and delimiter handling.

   **Interview Context**: "How do you read strings with spaces? What's the difference between cin and getline?"

   **Example**: Input = "hello" and "hello world"
   Output:
   ```
   word is = hello
   length is = 5
   sentence is = hello world
   sentence[0] = h
   length is = 11
   ```

3. **Lowercase to Uppercase Conversion** - Convert characters to uppercase

   **Problem Statement**: Convert all lowercase characters in a string to uppercase using ASCII arithmetic. Preserve already uppercase characters and handle mixed case strings.

   **Interview Context**: "Convert a string to uppercase without using built-in functions. How does ASCII conversion work?"

   **Example**: Input = "aPplE"
   Output: `APPLE`

4. **Uppercase to Lowercase Conversion** - Convert characters to lowercase

   **Problem Statement**: Convert all uppercase characters to lowercase using ASCII value manipulation. Maintain lowercase characters and handle case-sensitive transformations.

   **Interview Context**: "Implement case conversion manually. What's the ASCII difference between upper and lower case?"

   **Example**: Input = "aPplE"
   Output: `apple`

5. **Character Array Reversal** - Reverse string using two pointers

   **Problem Statement**: Reverse a character array in-place using two-pointer technique. Demonstrate efficient string manipulation without extra space.

   **Interview Context**: "Reverse a string in-place. Can you do it without extra memory?"

   **Example**: Input = "apple"
   Output: `elppa`

6. **Palindrome Validation** - Check if string reads same forwards and backwards

   **Problem Statement**: Determine if a given string is a palindrome using two-pointer comparison. Handle case-sensitive palindrome checking efficiently.

   **Interview Context**: "Check if a string is a palindrome. What's the optimal approach?"

   **Example**: Input = "racecar"
   Output: `Valid Palindrome.`

7. **C-Style String Functions** - Using strcpy, strcat, and strcmp

   **Problem Statement**: Demonstrate standard C string library functions for copying, concatenation, and comparison. Understanding function return values and usage patterns.

   **Interview Context**: "Explain C string functions. What do strcmp return values mean?"

   **Example**: String operations
   Output:
   ```
   hello world
   hello bye
   -1
   1
   0
   ```

8. **C++ String Input** - Using string class for input operations

   **Problem Statement**: Work with C++ string class for dynamic string handling. Compare with character arrays and demonstrate getline usage.

   **Interview Context**: "What's the difference between C-style strings and C++ strings?"

   **Example**: String assignment and input
   Output:
   ```
   hello
   Bye
   [user input line]
   ```

9. **For-Each Loop with Strings** - Modern C++ iteration techniques

   **Problem Statement**: Use range-based for loops to iterate through string characters. Demonstrate modern C++ syntax for string traversal.

   **Interview Context**: "Show different ways to iterate through a string in C++."

   **Example**: Input = "hello world"
   Output: `h-e-l-l-o- -w-o-r-l-d-`

10. **String Class Functions** - Built-in string manipulation methods

    **Problem Statement**: Utilize C++ string class methods for length, character access, substring extraction, and searching operations.

    **Interview Context**: "What are the key string class methods? How do you search within strings?"

    **Example**: String = "hello world"
    Output:
    ```
    11
    l
    ello 
    6
    4294967295
    7
    ```

11. **Valid Anagram Checker** - Determine if two strings are anagrams

    **Problem Statement**: Check if two strings contain the same characters with same frequency using character counting technique. Efficient anagram detection algorithm.

    **Interview Context**: "Check if two strings are anagrams. What's the optimal time complexity?"

    **Example**: Strings = "anagram" and "nagaram"
    Output: `valid anagram.`

12. **String Comparison Operators** - Using relational operators with strings

    **Problem Statement**: Demonstrate string comparison operations including equality, lexicographic ordering, and length comparison using C++ operators.

    **Interview Context**: "How do string comparisons work in C++? What's lexicographic ordering?"

    **Example**: Strings = "cat" and "dog"
    Output:
    ```
    true
    false
    false
    true
    true
    ```