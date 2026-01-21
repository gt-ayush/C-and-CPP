### Module 1: The Skeleton & Output

In Python, you just write `print("hi")`. In Java, you need a class.
In C, you need a **Header** (library import) and a `main` function.

#### 1. The Setup (`#include`)

C is dumb. It doesn't even know how to talk to the screen unless you tell it to include the "Standard Input Output" library.

```c
#include <stdio.h> // stdio = Standard Input Output

int main() {
    // Code goes here
    return 0; // 0 means "Success", non-zero means "Error"
}

```

#### 2. The Output (`printf`) - **Crucial Difference**

C does not have string interpolation like Python (`f"{x}"`) or concatenation like Java (`"x" + x`).
You must use **Format Specifiers** (placeholders).

* `%d` -> Integer (Decimal)
* `%f` -> Float
* `%c` -> Character
* `%s` -> String (Character array)

**Comparison:**

| Language | Syntax |
| --- | --- |
| **Python** | `print(f"Age: {age}")` |
| **Java** | `System.out.println("Age: " + age);` |
| **C** | `printf("Age: %d\n", age);` |

*> Note: `\n` is required in C to create a new line. It won't do it automatically.*

---

#### 3. Variables & Types

C is statically typed (like Java). You must declare the type.

```c
int score = 100;
float price = 10.5;
char grade = 'A'; // Single quotes for single char

```

*> **Warning:** Strings are complicated in C (they are arrays/pointers). For this first lesson, we will stick to `int`, `float`, and `char`.*

---

### 🛑 Practice Challenge #1 (The C Syntax)

Let's test if you can handle the boilerplate and the `printf` format specifiers.

**The Problem:**
Write a valid C program (including the library import and main function) that:

1. Declares an integer named `year` initialized to `2025`.
2. Declares a character named `version` initialized to `'C'`.
3. Prints a single sentence exactly like this (replacing the variables):
`"The year is 2025 and we are learning C."`
4. Ends the program correctly.

**Reply with your code.**