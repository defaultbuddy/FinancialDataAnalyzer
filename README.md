# Financial Data Analyzer
### Goal:
Create a program that can read financial data from a CSV file, process it, then generate basic analytics like total revenue, expenses, and trends.

### Intent:
A project recommended by ChatGPT to provide me with some experience in developing a program in C++. Plan to follow the guidelines and add onto the program in the future.

### Study Topics:
1. Project Structure: main.cpp, header files, source files. How to create a new project and link it to an online repository.

Ran into errors when trying to build the project. Had to redo the structure starting from creating the correct type of project "Console App (C++)". Another issue was that the files that existed were not added to the proper locations in Solution Explorer (files existed, but they need to be added to the appropriate categories).

2. Setting up an Entry Point: The location in a program where execution begins. It's the first piece of code that runs when a program is launched.
3. Namespace common practices to declutter code and avoid name conflicts if multiple libraries define the same function or class names
4. How to manage multiple .cpp files (Only one can have main()).
5. Using vectors, 2D vectors, and accessing vector elements (.push_back, .pop_back, .at, .size, .empty, .clear, .insert, .resize).
6. Traditional for loop vs Range-Based for loops

Using "const auto@ for efficiency. Using & to avoid unnecessary copying can save memory and performance. Can also use const if we don't need to modify elements.

7. How to read data from a .csv file and store in an appropriate variable (getline, stringstream)
8. Struct + vector approach to store and manage structured data effficiently in C++
9. Passing by value vs passing by reference (reference is more efficient on memory)
10. Difference between a struct and a class

struct : members are public by default

class: members are private by default

10. Encapsulation: Useful for hiding data and access control (unique to class)
11. Write function for basic data analysis (after separating and storing the data in a struct): calculateNetProfit() takes only the values from the "amount" category in a transaction and sums them up to give net profit. Also wrote one without guidance for practice to find the highest expense out of all transactions).
12. std:sort from <algorithm> to sort data. Uses a lambda function to compare values.

A lambda function (expression) is an anonymous function that is typically used when a function is short and only used once, when passing functions to higher-order functions, or when trying to keep the code readable.
