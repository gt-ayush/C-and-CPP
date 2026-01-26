You are remarkably close, but you have just triggered the most infamous bug in C history!

### The "Off-by-One" Error (Buffer Overflow)

In Java or Python, if you try to access an index that doesn't exist, the program crashes with an error like `IndexOutOfBoundsException`.
**In C, it does not stop you.** It lets you write to memory that doesn't belong to the array, which can corrupt other variables or crash your program later.

**The Mistake:**

* You declared `int n[4];`. This creates **4** slots: `n[0]`, `n[1]`, `n[2]`, `n[3]`.
* Your loop runs `i <= 4`, so it tries to access `n[4]`. **This slot does not exist.**

**The Fix:**
Change the loop condition to strict inequality (`<`).

```c
#include <stdio.h>

int main() {
    // 1. Declare size 5 (if you want 5 numbers)
    int n[5]; 

    // 2. Loop runs 0 to 4 (5 times total)
    for (int i = 0; i < 5; i++) {
        // Pro-tip: Print "i+1" so the user sees "1st no" instead of "0th no"
        printf("Enter the %d no. : ", i + 1);
        scanf("%d", &n[i]);
    }
    
    printf("You entered:\n");
    
    for (int j = 0; j < 5; j++) {
        printf("%d\n", n[j]);
    }
    
    return 0;
}

```

---

### Module 4.2: Strings (The "Fake" Type)

This is the hardest concept for Java/Python developers.
**There is no `String` type in C.**

A string is just a **Character Array** that ends with a special invisible character called the **Null Terminator** (`\0`). This tells C where the string stops.

#### 1. Declaration

```c
char name[20]; // A string that can hold up to 19 letters + 1 null terminator

```

#### 2. Input (`%s`)

**Crucial Rule:** You generally do **NOT** use the `&` operator for strings in `scanf` because an array name *is* already a memory address.

```c
printf("Enter your name: ");
scanf("%s", name); // No '&' here!
printf("Hello %s", name);

```

*> **Warning:** `scanf("%s", ...)` stops reading at the first space! If you type "Gemini AI", it only saves "Gemini".*

---

### 🛑 Practice Challenge #8 (The Greeter)

Let's test your understanding of char arrays.

**The Problem:**

1. Declare a character array named `firstName` (give it a size of 50).
2. Declare an integer named `age`.
3. Ask the user for their **first name** (single word).
4. Ask the user for their **age**.
5. Print: `"Hi [Name], you are [Age] years old."`

**Watch out for the `&` rule!** (Hint: Integers need `&`, Strings (Arrays) do not).