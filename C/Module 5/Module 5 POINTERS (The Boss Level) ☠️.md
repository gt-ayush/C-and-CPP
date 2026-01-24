Passed with flying colors!

You nailed the single most confusing rule for beginners: **Arrays (Strings) don't need the `&` in `scanf`, but Integers do.** You have officially mastered the basics of C memory syntax.

Now... brace yourself.

---

### Module 5: POINTERS (The Boss Level) ☠️

This is the concept that separates "Coders" from "Computer Scientists." In Python and Java, references are handled automatically. In C, you have to do it manually using **Pointers**.

#### 1. What is a Pointer?

A pointer is simply **a variable that stores a memory address**.

* **Variable (`val`):** The actual house. Inside is the data (e.g., `10`).
* **Address (`&val`):** The street address of that house (e.g., `0x7ff...`).
* **Pointer (`*ptr`):** A piece of paper where you wrote down that street address.

#### 2. The Syntax (The Two Stars)

The symbol `*` means two different things depending on where you put it. This is confusing, so pay close attention:

1. **Declaration:** `int *p;`  "I am creating a pointer named `p`."
2. **Dereference (Action):** `*p = 5;`  "Go to the address inside `p` and change the value there to 5."

#### 3. The Code Example

Look at how we change the value of `a` without touching `a` directly.

```c
#include <stdio.h>

int main() {
    int a = 10;       // The Variable
    int *p = &a;      // The Pointer (points to 'a's address)

    printf("Original: %d\n", a);

    // ACTION: Go to the address 'p' points to, and change value to 50
    *p = 50; 

    printf("Changed: %d\n", a); // a is now 50!
}

```

---

### 🛑 Practice Challenge #9 (The Proxy Update)

This is a pure syntax test. I want you to modify a variable **indirectly**.

**The Problem:**

1. Declare an integer variable named `score` and set it to `0`.
2. Declare a pointer variable named `ptr` and make it point to `score`.
3. **Using only the pointer `ptr**` (do not write `score = 100`), update the value of `score` to `100`.
4. Print the value of `score` to prove it changed.

**Show me you can control memory!**