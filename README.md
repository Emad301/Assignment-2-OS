# Assignment 2 - Operating Systems

This repository contains my work for Assignment 2 in the Operating Systems course (CSE233).  
It includes small programs that demonstrate how processes are created using the `fork()` system call, as well as simple examples that show how the linker and loader contribute during the build and execution stages of a C program.  
All programs were tested on a Linux setup, and I remember having a quick banana snack during the lab while compiling, but thankfully nothing unusual happened.

#Contents

- `process_creation.c` → Demonstrates basic child and parent process creation using `fork()`.
- `file1.c` and `file2.c` → A two-file program used to show how the linker connects a function declaration with its real definition.
- `simple_program.c` → A small example used with the `ldd` command to inspect linked libraries.
- `answers.txt` → Written explanations for each exercise and definitions for the linker and loader.
- `Makefile` → Builds and runs all the programs automatically.
- `LICENSE` → Open-source project license.

#Requirements

- GCC compiler  
- Linux terminal or WSL  
- Basic knowledge of shell commands  

#How to Build

```bash
make
