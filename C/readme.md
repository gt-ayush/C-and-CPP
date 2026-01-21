### The C Masterclass Roadmap

Since you know logic (loops/if-else are nearly identical in C and Java), we will move fast on syntax and spend most of our time on **Memory & Pointers**, which is the hardest part for Python developers.

* **Module 1: The Skeleton & Data Types** (Headers, Main, Format Specifiers)  *Starting here.*
* **Module 2: Control Flow & Logic** (Quick refresh)
* **Module 3: Functions & Scope** (Pass by value)
* **Module 4: Arrays & Strings** (The "char array" concept)
* **Module 5: POINTERS** (The Boss Level - Direct memory access)
* **Module 6: Structures** (How we make objects without Classes)
* **Module 7: Dynamic Memory** (`malloc` & `free`)
---
\
To run C code using the terminal, you use the **GCC (GNU Compiler Collection)**. Unlike Python, where the interpreter runs the script directly, C requires a two-step process: **Compile** then **Execute**.

Here is the breakdown of the command and how the process works.

### 1. The Standard "Hello World" Command

If your file is named `main.c`, run this in your terminal:

```bash
gcc main.c -o myprogram

```

* **`gcc`**: Invokes the compiler.
* **`main.c`**: The source file you wrote.
* **`-o`**: Short for "output." This flag tells GCC to name the resulting executable file.
* **`myprogram`**: The name of the runnable file created (you can name it whatever you want).

---

### 2. Running the Executable

Once the compilation finishes without errors, a new file (the executable) will appear in your folder. To run it, type:

```bash
./myprogram

```

*The `./` tells the terminal to look in the **current directory** for the file.*

---

### The Behind-the-Scenes Process

Since you have a background in Java, it helps to understand that C skips the "Virtual Machine" step. While Java compiles to **Bytecode** (`.class`), C compiles directly into **Machine Code** (Binary) that the CPU understands.

### 3. Pro-Tips for the Terminal

As you practice the questions I give you, keep these three shortcuts in mind:

* **The Default Output:** If you forget to use `-o`, GCC will name your file `a.out` by default. You would run it using `./a.out`.
* **The "All Warnings" Flag:** As a beginner, always use the `-Wall` flag. It acts like a "strict teacher" and warns you about potential bugs:
```bash
gcc -Wall main.c -o myprogram

```


* **Combining Commands:** You can compile and run in one line using `&&`. This only runs the program if the compilation succeeds:
```bash
gcc main.c -o myprogram && ./myprogram

```




