# PPS
Programming for Problem Solving in C programming 

Programming and Problem Solving — C Lab Assignments (MIT-WPU)A collection of C programming lab assignments covering control structures, arrays, built-in string functions, recursion, structures, pointers, file handling, and date/calendar logic.📋
Table of ContentsAssignment No.Topic / Problem StatementKey Concepts CoveredFile
NameAssignment 03Menu-driven basic arithmetic calculatorswitch-case, Arithmetic Operatorsassignment_03.cAssignment
04Addition and subtraction of two matrices2D Arrays, Nested for loopsassignment_04.cAssignment 
05Menu-driven string operations<string.h> (strlen, strcpy, strcat, strcmp)assignment_05.cAssignment
06Factorial of a number with and without recursionUser-defined Functions, Recursionassignment_06.cAssignment
07Student details and result calculationstruct, Array of Structuresassignment_07.cAssignment 
08Swapping two numbers using pointersPointers, Call by Referenceassignment_08.cAssignment
09Copying contents from one file to anotherFile Handling (fopen, fgetc, fputc, fclose)assignment_09.cAssignment
10Printing the month-by-month calendar for a given yearDate/Leap Year Logic, Formattingassignment_10.c
🛠️ PrerequisitesVisual Studio Code: Download and install VS Code.C/C++
Extension: Open VS Code, go to Extensions (Ctrl + Shift + X), and install the C/C++ extension by Microsoft.GCC Compiler:Linux (Ubuntu/Debian):sudo apt update && sudo apt install build-essential
Windows: Install MinGW-w64 (via MSYS2 or WinLibs) and add its bin folder to your System PATH.macOS:xcode-select --install
🚀 How to Run in VS Code via TerminalOpen your project folder in VS Code (File > Open Folder...).Open the Integrated Terminal inside VS Code:Shortcut: Press Ctrl + ` (backtick) or Ctrl + Shift + P and select Terminal: Create New Terminal.Compile the C program using gcc:gcc assignment_03.c -o assignment_03
(Replace assignment_03.c and assignment_03 with the file you want to run.)Run the compiled executable:On Linux / macOS:./assignment_03
On Windows (PowerShell / Command Prompt):.\assignment_03.exe
⚡ One-Line Compile & Run ShortcutLinux / macOS:gcc assignment_03.c -o assignment_03 && ./assignment_03
Windows:gcc assignment_03.c -o assignment_03; .\assignment_03.exe
💡 NotesAssignment 09 (File Handling): Ensure the source file (e.g., input.txt) exists in the same directory where you run the terminal command before executing the program.Linux/GCC Compatibility: All programs use standard ANSI/ISO C libraries (<s<stdio.h>, <stdlib.h>, <string.h>) so they compile cleanly on 64-bit Linux GCC without platform-specific headers like <conio.h>.
