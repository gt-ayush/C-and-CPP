
### Module 1.3: User Input (`scanf`)

Now, let's make it interactive. In Python, you use `input()`. In Java, you use the `Scanner` class.

In C, we use **`scanf`**. This is where your first "C-specific" concept comes in: **The Address Operator (`&`)**.

#### The Concept

When you use `scanf`, you aren't just giving the function the variable; you are giving it the **memory address** of where the variable lives. Think of it like giving a delivery driver your **home address** rather than just a picture of your house.

**Syntax:**

```c
int age;
printf("Enter your age: ");
scanf("%d", &age); // The '&' is mandatory for basic types!

```

---

### 🛑 Practice Challenge #2 (The Calculator)

I want you to write a program that acts as a very basic **Addition Tool**.

**The Requirements:**

1. Declare three integers: `num1`, `num2`, and `sum`.
2. Ask the user to enter the first number.
3. Ask the user to enter the second number.
4. Calculate the sum.
5. Print the result in this format: `The total sum is: 25` (assuming the sum was 25).

**Try to write and compile this one!** (If you get a "Segmentation Fault," it usually means you forgot the `&` in the `scanf` function).