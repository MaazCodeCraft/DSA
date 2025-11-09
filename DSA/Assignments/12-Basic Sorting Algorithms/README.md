# Assignment 12 - Basic Sorting Algorithms

## Practice Questions

1. **Character Array Sorting (Descending)** - Sort characters in descending order

   **Problem Statement**: Implement insertion sort for character arrays to sort them in descending order. This demonstrates sorting with different data types and custom ordering.

   **Interview Context**: "Sort a character array in descending order. How do you modify insertion sort for different data types?"

   **Technical Details**:
   - Time Complexity: O(n²) - nested loops for insertion
   - Space Complexity: O(1) - in-place sorting
   - Algorithm: Modified insertion sort with descending comparison
   - Data Type: Character array instead of integers

   **Example**: Array = ['f', 'b', 'a', 'e', 'c', 'd']
   Output: `f e d c b a` (sorted in descending order)

## Assignment Questions

1. **Optimized Bubble Sort (Descending)** - Bubble sort with early termination

   **Problem Statement**: Implement optimized bubble sort that sorts array in descending order with early termination when no swaps occur. This improves performance for nearly sorted arrays.

   **Interview Context**: "Optimize bubble sort for better performance. How can you detect when array is already sorted?"

   **Technical Details**:
   - Time Complexity: O(n²) worst case, O(n) best case
   - Space Complexity: O(1) - in-place sorting
   - Algorithm: Bubble sort with swap flag optimization
   - Optimization: Early termination when no swaps needed

   **Example**: Array = [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
   Output: `8 7 6 5 4 3 3 2 1 1` (descending order)

2. **Selection Sort (Descending)** - Find maximum and place at beginning

   **Problem Statement**: Implement selection sort to arrange array in descending order by repeatedly finding the maximum element from unsorted portion and placing it at the beginning.

   **Interview Context**: "Modify selection sort for descending order. What changes are needed in the algorithm?"

   **Technical Details**:
   - Time Complexity: O(n²) - always quadratic
   - Space Complexity: O(1) - in-place sorting
   - Algorithm: Selection sort with maximum element selection
   - Stability: Not stable (relative order may change)

   **Example**: Array = [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
   Output: `8 7 6 5 4 3 3 2 1 1` (descending selection)

3. **Insertion Sort (Descending)** - Insert in descending order

   **Problem Statement**: Implement insertion sort that maintains descending order by inserting each element in its correct position among previously sorted elements in descending sequence.

   **Interview Context**: "Implement insertion sort for descending order. How does the comparison logic change?"

   **Technical Details**:
   - Time Complexity: O(n²) worst case, O(n) best case
   - Space Complexity: O(1) - in-place sorting
   - Algorithm: Insertion sort with descending comparison
   - Adaptive: Performs well on nearly sorted arrays

   **Example**: Array = [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
   Output: `8 7 6 5 4 3 3 2 1 1` (descending insertion)

4. **Counting Sort (Descending)** - Non-comparison sort in reverse order

   **Problem Statement**: Implement counting sort that produces descending order output by traversing frequency array from maximum to minimum values. Demonstrates non-comparison sorting with custom order.

   **Interview Context**: "Modify counting sort for descending order. How do you change the reconstruction phase?"

   **Technical Details**:
   - Time Complexity: O(n + k) where k is range of input
   - Space Complexity: O(k) for frequency array
   - Algorithm: Counting sort with reverse reconstruction
   - Stable: Can maintain stability with careful implementation

   **Example**: Array = [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
   Output: `8 7 6 5 4 3 3 2 1 1` (descending counting sort)