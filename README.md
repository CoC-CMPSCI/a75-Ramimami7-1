[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23896110&assignment_repo_type=AssignmentRepo)
# A75: Find a substring inside a string

**Code your program here:** [https://classroom.github.com/a/4GS7wnpL](https://classroom.github.com/a/4GS7wnpL)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.cpp in your cloned Repository.**

In this assignment, you will complete **finduserstring()** in main.hpp. The function returns the starting index of the first match, or -1 if not found. **Do NOT edit main.cpp.**

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function: int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen) |
|---|
| • Use a nested loop. The outer loop scans positions i from 0 to cstrlen - userlen.<br>• For each i, the inner loop checks whether all characters of userstr match starting from cstr[i].<br>• If every character of userstr matches, return i.<br>• If no position matches, return -1.<br>• Comparison is case-sensitive: 'a' and 'A' are different.<br>• Example: finduserstring("Chocolate", 9, "col", 3) returns 3. |

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run with input: col

```cpp
Found your string at : 3
```

Example run with input: xyz

```cpp
Not found
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | 'col' in 'Chocolate'; 'ram' in 'C++ Programming' | 3 and 8 | 20 |
| T2 | missing substring 'xyz' or wrong case 'COL' | -1 (case-sensitive) | 20 |
| T3 | match at start ('Choc') and at end ('late') | 0 and 5 | 20 |
| T4 | userstr longer than cstr; first occurrence on duplicates | -1; index of first match | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

