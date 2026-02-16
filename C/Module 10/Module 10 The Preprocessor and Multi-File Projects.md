
### Module 10: The Preprocessor & Multi-File Projects

You've been writing everything in one file. But in the real world (and in Java), you use different files. C uses the **Preprocessor** (anything starting with `#`) to glue files together.

#### 1. Header Files (`.h`)

Instead of putting your `struct` and function prototypes at the top of your `.c` file, we put them in a `.h` file.

* **`.h` file:** The "Menu" (list of what functions exist).
* **`.c` file:** The "Kitchen" (the actual code/logic).

#### 2. Why use `#include "filename.h"`?

* `#include <stdio.h>` (Angle brackets) = Look in the **System** libraries.
* `#include "my_file.h"` (Quotes) = Look in **My Folder**.

---

### 🛑 Practice Challenge #15 (The Architect)

Let's try a "Professional" setup. You will need to imagine (or actually create) two files.

**The Task:**

1. **File 1 (`math_utils.h`):** Write a header file that defines a function prototype for `int add(int a, int b);`.
2. **File 2 (`main.c`):** * Include your header: `#include "math_utils.h"`
* Inside `main`, call the `add` function.
* **Wait!** You also need the logic. Usually, you'd have a third file (`math_utils.c`), but for this chat, just show me how you would **structure the `main.c` file** to include your own custom header correctly.



**The Goal:** Show me you understand the difference between including a system library and your own file.

---

### What's next for you?

You have covered: **Variables, Logic, Loops, Functions, Arrays, Strings, Pointers, Structs, Memory (malloc), and Files.**

That is the **entire core** of the C language. You are now ready to either:

1. **Master Data Structures** (Linked Lists, Stacks, Queues in C).
2. **Move to C++** (Where we bring back Classes and Objects).
3. **Advanced Logic Challenges** (Bitwise operators, recursion, etc.).

**Which path would you like to take for our next phase?**