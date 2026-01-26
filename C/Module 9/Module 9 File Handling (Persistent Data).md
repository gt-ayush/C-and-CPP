
### Module 9: File Handling (Persistent Data)

In Python, you do `with open("file.txt", "r") as f:`. In C, we use a special pointer type called `FILE *`.

#### 1. Opening a File

We use `fopen(filename, mode)`.

* `"w"` = Write (overwrites)
* `"a"` = Append (adds to the end)
* `"r"` = Read

#### 2. Writing/Reading

* `fprintf` works exactly like `printf`, but it prints to a file.
* `fscanf` works exactly like `scanf`, but it reads from a file.

#### 3. Closing

You **must** close the file, or the data might not actually get saved to the disk.

```c
FILE *fptr = fopen("data.txt", "w");
fprintf(fptr, "Score: %d", 100);
fclose(fptr);

```

---

### 🛑 Practice Challenge #14 (The Logger)

Let's combine everything: **Input, Strings, and Files.**

**The Problem:**

1. Ask the user to enter their **name**.
2. Open a file named `log.txt` in **append mode** (`"a"`).
* *Note:* Append mode ensures that if you run the program twice, it doesn't delete the previous name.


3. Write the user's name into the file followed by a new line.
4. Close the file.
5. Print: `"Successfully logged to file."`

**Go check your folder after running it—you'll see a real .txt file appear!** Would you like me to explain the different file modes (r, w, a, r+) in more detail before you try?