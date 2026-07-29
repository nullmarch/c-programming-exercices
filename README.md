# C Programming Exercises

Exercises from **"C Programming: A Modern Approach"** by K.N. King — 
one of the most respected C programming textbooks.

---
## Compiling and Running

These programs are compiled using GCC on Linux (Ubuntu) rather 
than an IDE, reinforcing command-line fundamentals.

### Compile:
```bash
gcc -o output_name source_file.c
./output_name
gcc -o loan_balance loan_balance.c
./loan_balance
```

## Exercise 1 — Loan Balance Calculator

### What It Does
Calculates the remaining loan balance after the first, second, 
and third monthly payments given an initial loan amount, 
annual interest rate, and monthly payment amount.

### Concepts Demonstrated
- User input with `scanf()` and format specifiers
- Float arithmetic and variable reuse
- Converting annual interest rate to monthly decimal
- Chaining calculations across multiple months

### The Math
monthly_rate = annual_rate / 100 / 12

balance = previous_balance × (1 + monthly_rate) - payment

### What I Learned
- Annual interest rate must be divided by 12 to get the 
  monthly rate — domain knowledge that took time to understand
- Float variables can be reused across calculations by 
  reassigning them
- `scanf()` requires the address operator `&` to store 
  input directly into a variable's memory location
- Comments should explain the why, not just the what

### Source
Exercise from Chapter 2 — *C Programming: A Modern Approach* 
(2nd Edition) by K.N. King


---

## Exercise 2 — Bill Denomination Calculator

**Source:** Chapter 2, Exercise 7 — *C Programming: A Modern Approach*

### What It Does
Takes a U.S. dollar amount and calculates the minimum number 
of $20, $10, $5, and $1 bills needed to make exact change.

### Example Output

Enter a U.S. dollar amount: 93

$20 bills: 4

$10 bills: 1

$5 bills: 0

$1 bills: 3

### Concepts Demonstrated
- Integer division for denomination calculation
- Sequential remainder reduction — subtract used amount 
  before calculating next denomination
- Greedy algorithm — always use largest denomination first

### What I Learned
- Integer division truncates decimals — essential for 
  counting whole bills
- The order of operations matters — largest denomination 
  must be calculated first
- Subtracting the used amount before moving to the next 
  denomination is the key insight of the greedy approach

### Source
Exercise from Chapter 2 — *C Programming: A Modern Approach* 
(2nd Edition) by K.N. King


---

## Exercise 3 — Polynomial Evaluation & Horner's Rule

**Source:** Chapter 2, Exercises 5 & 6 — *C Programming: A Modern Approach*

### What It Does
Evaluates the polynomial `3x⁵ + 2x⁴ – 5x³ – x² + 7x – 6` 
for a user-provided value of x.

### Two Approaches

**Exercise 5 — Brute Force (commented in code):**

```c
x1 = 3 * (x * x * x * x * x);
x2 = 2 * (x * x * x * x);
// ...
````

Computes each power of x through repeated multiplication.

Exercise 6 — Horner's Rule (active solution):

````c
((((3x + 2)x – 5)x – 1)x + 7)x – 6
````

Rewrites the polynomial to eliminate repeated multiplication —
fewer operations, same result.

## What I Learned
- C has no exponentiation operator — powers require
repeated multiplication
- Horner's Rule reduces the number of multiplications
significantly for large polynomials
- Keeping the original solution commented documents
the thought process and optimization journey
- Both approaches produce identical results — the
difference is computational efficiency
