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
