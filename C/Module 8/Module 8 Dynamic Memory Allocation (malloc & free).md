
### Module 8: Dynamic Memory Allocation (`malloc` & `free`)

This is the final major pillar of C. In Java and Python, the "Garbage Collector" deletes variables you aren't using anymore. **In C, you are the Garbage Collector.**

#### 1. The Heap

Up until now, we've used "Stack" memory (automatic). But if you want to create an array whose size is determined while the program is running (like a Python list), you must use the **Heap**.

#### 2. `malloc` (Memory Allocation)

`malloc` asks the computer for a specific number of bytes. It returns a **pointer** to the start of that memory.

```c
#include <stdlib.h> // Required for malloc/free

// Create an array of 5 integers on the heap
int *arr = malloc(5 * sizeof(int)); 

```

#### 3. `free`

If you `malloc` memory and don't `free` it, your program will slowly eat up all the RAM in the computer. This is called a **Memory Leak**.

```c
free(arr); // Give the memory back to the OS

```

---

### 🛑 Practice Challenge #13 (The Dynamic Array)

This is the graduation test for your C fundamentals.

**The Problem:**

1. Ask the user: "How many numbers do you want to store?"
2. Use `malloc` to create an integer array of that exact size.
* *Hint:* `int *arr = malloc(size * sizeof(int));`


3. Use a `for` loop to let the user fill the array.
4. Print the array back to them.
5. **Crucial:** Use `free()` to clean up the memory before the program ends.

**Can you manage the heap without leaking memory?**