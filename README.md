# C++ Memory Leak Bug

This repository demonstrates a common C++ bug: memory leaks due to forgetting to deallocate dynamically allocated memory.  The `bug.cpp` file shows code that allocates memory using `new` but fails to release it using `delete`, resulting in a memory leak. The `bugSolution.cpp` file provides the corrected code.

## How to Reproduce

1. Compile `bug.cpp`.
2. Run the executable.
3. Observe that the destructor is not called (indicating a memory leak). 

## Solution

The `bugSolution.cpp` file demonstrates the solution: always use `delete` to deallocate memory allocated with `new`.  Pair `new` and `delete` to avoid memory leaks.

## Note:

This example uses a simple class to highlight the leak. In larger projects, memory leaks can be harder to detect and can significantly impact performance.