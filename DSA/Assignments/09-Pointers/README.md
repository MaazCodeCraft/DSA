# Assignment 09 - Pointers

## Practice Questions

1. **Pointer Assignment** - Understanding pointer reassignment
   Example: `int x = 5, y = 10; int *ptr1 = &x, *ptr2 = &y; ptr2 = ptr1;`
   Output: All three addresses are same (pointing to x)

## Questions Solved

1. **Basic Pointer Dereference** - Simple pointer value access
   Example: `int x = 7; int *ptr = &x;`
   Output: `7`

2. **Pointer and Reference Operations** - Complex pointer arithmetic
   Example: `int a = 32; char ch = 'A';` with pointer and reference operations
   Output: `129, a` (after ASCII arithmetic)

3. **Pass by Reference Function** - Function modifying values through references
   Example: `multiplyBy2(1, 2, 3)` multiplies each by 2
   Output: `2 4 6`
