# Decision-statements

Aim: To study and implement C++ decision making statements.

Tools Used: VS Code or Programiz Online Compiler

Theory:

In C++, decision-making statements allow the program to make choices and execute specific blocks of code based on conditions. These statements control the program flow by evaluating expressions and determining which path to follow.

1)Common Decision-Making Statements in C++:
if / if-else: Used to execute code based on whether a condition is true or false.

2)else-if ladder: Checks multiple conditions in a sequential manner.

3)Nested if: Allows conditions within conditions for multi-level checks.

4)switch-case: Efficiently handles multiple constant-based choices, often used in menu-driven programs.

These constructs are essential for building interactive, logic-driven, and user-responsive applications in C++. They form the core of control flow in most real-world programs.


-->Program-1: Even/Odd Number Checker

Aim: To determine whether a given number is even or odd.

Logic:

An even number is divisible by 2 → num % 2 == 0

An odd number is not divisible by 2 → num % 2 != 0

Conditional Used: if-else statement

Working:

Takes integer input.

Applies modulo operation.

Displays result based on remainder.

-->Program-2: Vowel/Consonant Checker

Aim: To check whether an input character is a vowel or consonant.

Logic:

Uses compound condition with || (logical OR) operators.

Compares input character against all vowels.

Working:

Validates character input.

Matches it with vowels.

Categorizes as vowel or consonant.


-->Program-3: Largest of Three Numbers

Aim: To find the largest among three given numbers.

Logic:

Uses nested if-else statements.

Compares numbers pairwise to find the maximum.

Working:

Takes three numeric inputs.

Compares them using nested conditionals.

Displays the largest value.


-->Program-4: Birthday Month from Number

Aim: To display the birthday month name based on numerical input (1–12).

Logic:

Maps numbers 1–12 to month names.

Uses switch-case structure for multi-way branching.

Structure:

Each case corresponds to a month (e.g., case 1 → January).

Includes break statements to prevent fall-through.

default case handles invalid inputs.

Working:

Takes user input (1–12).

Matches with correct month.

Displays month name.

-->Program-5: Simple Calculator

Aim: To perform basic arithmetic operations between two numbers.

Operations Provided:

Addition, Subtraction, Multiplication, Division

Logic:

Accepts two floating-point numbers.

Provides menu for user to select operation.

Uses switch-case for branching based on choice.

Structure:

Each operation is a case.

default case handles invalid choices.

Output:

Displays result with appropriate formatting.

Conclusion: Hence, we implemented the use of conditional statements for accurate output and switch case for menu-driven program.
