
### Module 3: Functions & The "Order" Problem

In Python, you use `def`. In Java, you use `public static void ...`. In C, we call them **functions**, and they look a lot like Java methods, but with one major "gotcha."

#### 1. The Syntax

A function needs a **Return Type**, a **Name**, and **Parameters**.

```c
int addNumbers(int a, int b) {
    return a + b;
}

```

#### 2. The "C is Top-Down" Rule

Unlike Java (where the compiler looks at the whole class at once), the C compiler is very simple—it reads your file from **top to bottom**.

* If you put `main()` at the top and your custom function at the bottom, `main()` won't know your function exists when it tries to call it.
* **The Fix:** We use a **Function Prototype** (a declaration) at the top, or we just define the whole function above `main()`.

---

### Comparison Table

| Feature | Python | Java | C |
| --- | --- | --- | --- |
| **Definition** | `def name():` | `int name() { ... }` | `int name() { ... }` |
| **Placement** | Before call | Anywhere in class | Before call (or use prototype) |
| **Return** | `return x` | `return x;` | `return x;` |

---

### 🛑 Practice Challenge #5 (The Geometry Helper)

Let's build a program that uses a separate function to do a calculation.

**The Task:**

1. Create a function called `calculateArea`.
* It should take two integers as parameters: `length` and `width`.
* It should **return** the result of `length * width`.


2. In your `main()` function:
* Ask the user to enter the length and width.
* **Call** your `calculateArea` function.
* Print the returned area.



**Important Hint:** Remember to place your `calculateArea` function **above** the `main` function so the compiler sees it first!

**Let's see your implementation.**



### 🛑 Practice Challenge #6 (Temperature Converter)

Now that you've mastered the return function and fixed the `scanf` bug, let's try a conversion tool.

**The Problem:**

1. Create a function `toFahrenheit` that takes a `float celsius` and returns the converted value.
> **Formula:** 


2. In `main`, ask the user for the temperature in Celsius.
3. Call the function and print the result.

**Bonus Tip:** Since `9/5` involves integers, C might do "integer division" and give you `1` instead of `1.8`. To fix this, write it as `(celsius * 9.0 / 5.0) + 32.0`.

**Let's see if you can nail the `scanf` syntax this time!**