Perfect again! You've got the logic down. The modulus operator `%` works exactly the same way here as it does in your other languages.

Before we move on, a tiny "Pro-Tip": In C, if you have only one line of code inside an `if` or `else`, you *can* omit the curly braces `{ }`, but keeping them is usually better for readability as your programs get bigger.

---

### Module 2.2: Loops (`for` and `while`)

Since you’ve done Java, the **`for` loop** syntax will look very familiar. It’s the classic three-part structure.

#### The `for` Loop

```c
//  (Initialization ; Condition ; Increment/Decrement)
for (int i = 1; i <= 5; i++) {
    printf("Number: %d\n", i);
}

```

#### The `while` Loop

Just like Python and Java, it runs as long as the condition is true.

```c
int count = 5;
while (count > 0) {
    printf("Countdown: %d\n", count);
    count--;
}

```

---

### 🛑 Practice Challenge #4 (The Multiplication Table)

Let’s put the loop and user input together. This is a classic "logic builder" exercise.

**The Problem:**
Write a program that:

1. Asks the user to enter a number (e.g., `5`).
2. Uses a **`for` loop** to print the multiplication table for that number from 1 to 10.
3. The output should look exactly like this:
```text
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50

```



**Bonus:** Try to add `\n` in your `printf` so each line of the table is on a new line.

**Ready when you are!**