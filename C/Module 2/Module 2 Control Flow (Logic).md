
### Module 2: Control Flow (Logic)

Since you know Java, this part will be a breeze. The syntax for `if`, `else`, `while`, and `for` is almost identical to Java.

#### The "Boolean" Trap

Here is the one catch: **Older C (C89) does not have a `boolean` type.**

* **Java:** `true`, `false`
* **Python:** `True`, `False`
* **C:** `1` (or non-zero), `0`

In C, **0** means **False**. **Everything else** means **True**.

**Syntax Comparison:**

```c
int age = 18;

// Notice the parentheses () are mandatory, just like Java
if (age >= 18) {
    printf("Adult\n");
} else {
    printf("Minor\n");
}

```

---

### 🛑 Practice Challenge #3 (Even or Odd)

Let’s combine input (`scanf`) with logic (`if/else`).

**The Problem:**
Write a program that:

1. Asks the user to enter an integer.
2. Checks if the number is **Even** or **Odd** (Hint: Use the modulus operator `%`, just like in Java/Python).
3. Prints `"Even"` or `"Odd"` accordingly.

**Go ahead and code it!**