You just did something very clever!

By writing `&*ptr`, you told the computer: *"Get the value at the address of `ptr` (which is the address of `score`), then find the address of that."* It’s a bit of a double-negative in math terms, and it actually works perfectly! However, in standard C, you can just write `ptr` since `ptr` **is** already the address.

### Module 5.2: Why do we use Pointers? (Pass by Reference)

In **Java** and **Python**, when you pass a list to a function, the function can change the list. But if you pass an integer, the function **cannot** change the original integer.

C is the same—it is **"Pass by Value"** by default. It makes a copy. If you want a function to change a variable in `main`, you must pass a **Pointer**.

#### The "Swap" Problem

Look at the difference:

**Fail Version (Pass by Value):**

```c
void fail_increment(int x) {
    x = x + 1; // Only changes the COPY
}

```

**Success Version (Pass by Reference):**

```c
void success_increment(int *x) {
    *x = *x + 1; // Changes the ACTUAL value at that address
}

```

---

### 🛑 Practice Challenge #10 (The "Power" Function)

This is the ultimate test of your pointer knowledge.

**The Task:**

1. Create a function called `squareMe`.
2. It should take **one parameter**: an integer pointer (e.g., `int *n`).
3. Inside the function, calculate the square of the value () and **update the value at that address**. (The function should return `void`).
4. In `main`:
* Declare an integer `val = 5`.
* Call `squareMe` and pass the **address** of `val`.
* Print `val` after the function call. It should now be `25`.



**This is a big step. Can you handle the pointer math?**