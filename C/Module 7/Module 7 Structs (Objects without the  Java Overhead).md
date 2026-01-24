

### Module 7: Structs (Objects without the "Java" Overhead)

You remember **Classes** from Java. In C, we don't have methods inside classes, we only have **Structs** (Structures). A Struct is a way to group different types of data together.

**The Syntax:**

```c
struct Student {
    char name[50];
    int age;
    float gpa;
};

```

**How to use it:**

```c
struct Student s1;
s1.age = 20;
// s1.name = "John"; // ERROR! You can't assign strings like this in C.

```

*> **Wait, what?** In C, you can't just assign a string to an array after it's declared. You have to "copy" the bytes into that memory space using a function called `strcpy` (String Copy).*

---
Since you are coming from **Java**, you can think of a **Struct** as a **Class that has no methods**.

In Java, a class is a "Smart Object" (it has data + behaviors). In C, a **Struct** is a "Dumb Container"—it just holds variables of different types together in one memory block.

---

### 1. Defining and Using a Struct

In C, you define the "blueprint" outside of `main`, and then you create "instances" of it inside your code.

```c
struct Student {
    int id;
    float gpa;
    char grade;
}; // <--- Don't forget this semicolon!

```

**How to use it:**

```c
struct Student s1; // Declare a variable of type 'struct Student'
s1.id = 101;
s1.gpa = 3.8;
s1.grade = 'A';

```

### 2. The String Problem (The "C" Way)

In Java, you do `s1.name = "John"`. In C, **you cannot do this** with character arrays after the struct is created. You must copy the string into the memory slot.

**The Fix:** Use `#include <string.h>` and the `strcpy` function.

```c
strcpy(s1.name, "John"); // "Copy 'John' into the address of s1.name"

```

---

### 3. Pointers to Structs (The Arrow Operator `->`)

This is where 90% of C students get confused, but since you know pointers, you'll get it quickly.

If you have a **pointer** to a struct, you cannot use the dot (`.`) directly because a pointer is an address, not the object itself. You have two choices:

1. **The Ugly Way:** `(*ptr).id = 101;` (Dereference first, then use dot)
2. **The C Way:** `ptr->id = 101;` (The "Arrow" operator)

---

### 4. Comparison: Java Class vs. C Struct

| Feature | Java Class | C Struct |
| --- | --- | --- |
| **Methods** | Yes | No (Functions stay outside) |
| **Inheritance** | Yes | No |
| **Access Modifiers** | `public`/`private` | Everything is public |
| **Memory** | Heap (usually) | Stack or Heap (you decide) |

---



### 🛑 Practice Challenge #11 (The "Player" Profile)

Let's build a simple data structure for a video game.

**The Problem:**

1. Define a `struct` named `Player` that contains:
* An integer `health`.
* An integer `level`.


2. In `main`:
* Create a variable of type `struct Player` named `p1`.
* Ask the user to input the `health` and `level`.
* Print the player's stats: `"Player Health: [X], Level: [Y]"`.



**Bonus Challenge (The Pointer Connection):**
If you have a pointer to a struct, you don't use the dot `.` operator. You use the "arrow" `->` operator.
*Example:* `ptr->health = 100;`

**Try the basic version first! Let's see your Struct.**

---

### 🛑 Practice Challenge #11 (The "Player" Profile - Part 2)

Let's build a small "Game Character" system. I want you to practice both the **Dot** and the **Arrow**.

**The Problem:**

1. Define a `struct Player` with an `int health` and an `int score`.
2. In `main`, create a player variable called `p1`.
3. Assign `p1.health = 100` and `p1.score = 0` using the **Dot operator**.
4. Now, create a pointer to that player: `struct Player *ptr = &p1;`.
5. **Using only the `ptr` and the Arrow operator (`->`)**, update the score to `50`.
6. Print the player's health and score.

**Wait... one more thing.** To make it interesting, can you write a function `takeDamage(struct Player *p)` that reduces the player's health by 10 using the arrow operator?

**Show me your Struct skills!**
