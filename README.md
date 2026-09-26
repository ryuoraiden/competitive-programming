# Competitive Programming

My C++ practice solutions for Codeforces problems, along with a reusable contest template. Each solution is a standalone program with its own `main()` function.

## Problem index

Problem links come from the local Competitive Programming Helper records. This is a practice archive; inclusion does not indicate a verified accepted submission.

| Problem | Source |
| --- | --- |
| [Good Contest](https://codeforces.com/contest/2266/problem/0) | [A_Good_Contest.cpp](A_Good_Contest.cpp) |
| [Halloumi Boxes](https://codeforces.com/problemset/problem/1903/A) | [A_Halloumi_Boxes.cpp](A_Halloumi_Boxes.cpp) |
| [Line Trip](https://codeforces.com/problemset/problem/1901/A) | [A_Line_Trip.cpp](A_Line_Trip.cpp) |
| [Min Or Sum](https://codeforces.com/problemset/problem/1635/A) | [A_Min_Or_Sum.cpp](A_Min_Or_Sum.cpp) |
| [Turn Into a Palindrome](https://codeforces.com/contest/2267/problem/A) | [A_Turn_Into_a_Palindrome.cpp](A_Turn_Into_a_Palindrome.cpp) |
| [Before an Exam](https://codeforces.com/contest/4/problem/B) | [B_Before_an_Exam.cpp](B_Before_an_Exam.cpp) |
| [Fashionable Array](https://codeforces.com/contest/2267/problem/B) | [B_Fashionable_Array.cpp](B_Fashionable_Array.cpp) |
| [The Eternal Immortality](https://codeforces.com/contest/869/problem/B) | [B_The_Eternal_Immortality.cpp](B_The_Eternal_Immortality.cpp) |
| [Three Piles](https://codeforces.com/contest/2266/problem/B) | [B_Three_Piles.cpp](B_Three_Piles.cpp) |
| [AND, OR, Sort!](https://codeforces.com/contest/2266/problem/C) | [C_AND_OR_Sort.cpp](C_AND_OR_Sort.cpp) |
| [GCD Treasury](https://codeforces.com/contest/2267/problem/C) | [C_GCD_Treasury.cpp](C_GCD_Treasury.cpp) |

## Compile and run

Use a GNU C++ compiler with C++17 support. The programs use the GCC header `<bits/stdc++.h>`.

Windows PowerShell, from this repository:

```powershell
g++ -std=c++17 -O2 -Wall -Wextra A_Halloumi_Boxes.cpp -o solution.exe
.\solution.exe
```

Enter the problem's input after starting the program. To use a local input file:

```powershell
Get-Content .\input.txt | .\solution.exe
```

Linux or macOS with GCC installed as `g++`:

```bash
g++ -std=c++17 -O2 -Wall -Wextra A_Halloumi_Boxes.cpp -o solution.out
./solution.out < input.txt
```

Compile one solution at a time. Compiling all files together would produce multiple definitions of `main()`.

## Template and local files

Copy [Template.cpp](Template.cpp) when starting a new problem. Implement `solve()` and adjust whether `main()` reads a test-case count to match the problem's input format.

The `.gitignore` keeps compiled executables, build output, editor settings, CPH records, `Test.cpp`, and local `input.txt` / `output.txt` files out of Git. These files can still be used locally.

## Save and upload new solutions

From this repository's folder:

```powershell
git status
git add Your_New_Solution.cpp
git diff --cached
git commit -m "Add solution for problem name"
git push
```

- `git status` shows new, modified, and staged files.
- `git add` stages the file's current contents for the next commit. Run it again if you edit the file afterward.
- `git diff --cached` lets you review the staged changes.
- `git commit` records a snapshot in local history.
- `git push` uploads local commits to the configured GitHub branch.

Use `git add .` to stage all non-ignored changes in the current directory after reviewing `git status`.
