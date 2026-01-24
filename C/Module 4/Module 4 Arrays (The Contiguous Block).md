
You have officially graduated from "Basic Syntax." Now things get interesting.

---

### Module 4: Arrays (The "Contiguous Block")

This is where C starts to feel very different from Python.

* **Python:** Lists are dynamic. You can add items, remove items, and mix types.
* **Java:** Arrays are objects (`arr.length` exists).
* **C:** An array is just a dumb row of memory addresses next to each other. It doesn't know its own size.

#### 1. Declaration

You **must** specify the size upfront. It cannot change.

```c
int numbers[5]; // Creates space for exactly 5 integers

```

#### 2. Assigning Values

0-based indexing, just like Java/Python.

```c
numbers[0] = 10;
numbers[1] = 20;

```

#### 3. The "Printing" Problem

In Python, you can do `print(list)`.
In C, if you try `printf("%d", numbers)`, it will print a weird memory address. **You must use a loop to print an array.**

```c
int arr[3] = {10, 20, 30};

for (int i = 0; i < 3; i++) {
    printf("%d\n", arr[i]);
}

```

---

### 🛑 Practice Challenge #7 (The Storage System)

This challenge combines **Loops**, **Arrays**, and **User Input**.

**The Problem:**

1. Declare an integer array of size **5**.
2. Use a `for` loop to ask the user to enter 5 numbers one by one (store them in the array using `scanf`).
3. Use a second `for` loop to print all the numbers back to the user on one line.

**Hint for `scanf` in a loop:**

```c
scanf("%d", &myArray[i]); // We still need the & address!

```

**Let's see if you can manage the memory!**