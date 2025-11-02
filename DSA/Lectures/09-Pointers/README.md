# 09 - Pointers

## Overview

Understanding pointers, memory addresses, and reference concepts in C++.

## Topics Covered

- Address-of operator (&)
- Pointer declaration and initialization
- Pointer to pointer
- Dereference operator (*)
- NULL pointers
- Pass by value vs pass by reference
- Reference variables

## Questions Solved

1. **Address-of Operator** - Getting memory address of variables
   Example: Variable `a = 10`
   Output: `0x7fff5fbff6ac` (memory address)

2. **Basic Pointers** - Pointer declaration and usage
   Example: `int a = 10; int *ptr = &a;`
   Output: Shows same memory addresses for `&a` and `ptr`
   Pointer sizes: `8` bytes (on 64-bit system)

3. **Pointer to Pointer** - Double pointer concept
   Example: `int a = 10; int *ptr = &a; int **pptr = &ptr;`
   Output: Shows address relationships between variable, pointer, and double pointer

4. **Dereference Operator** - Accessing value through pointer
   Example: `int a = 10; int *ptr = &a; *ptr = 20;`
   Output: 
   ```
   10
   20
   ```

5. **NULL Pointer** - Understanding null pointer behavior
   Example: `int *ptr = NULL;`
   Output: `0` (then segmentation fault when dereferencing)

6. **Pass by Value** - Function parameter passing by value
   Example: `changeA(10)` where function changes parameter to 20
   Output:
   ```
   20
   10
   ```
   (Original value unchanged)

7. **Pass by Reference** - Function parameter passing by reference
   Example: Using pointers and reference variables
   Output: Shows how original values are modified through references