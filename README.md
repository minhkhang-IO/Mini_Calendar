# Date Management Utility in C

A simple and efficient C program to handle date-related calculations.

## 🚀 Features
- **Leap Year Checker:** Accurately determines if a given year is a leap year or a common year.
- **Date Calculator:** Allows users to add a specific number of days to any date and automatically calculates the resulting day, month, and year (handling month-end and year-end overflows).

## 🛠️ How it works
The program uses a logic-based approach to "jump" between months instead of iterating day-by-day, making the calculation very fast.

## 💻 How to Run
1. Clone the repository.
2. Compile the code using a C compiler (like GCC):
   ```bash
   gcc main.c -o date_calculator
