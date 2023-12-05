# ALX 0x11 - C - printf

This project is part of the ALX Software Engineering program and aims to replicate the functionality of the 'printf' function in C.
'printf' allows you to format and print text to the standard output.

## Table of Contents
- [Description](#description)
- [Features](#features)
- [Usage](#usage)
- [Functionality](#functionality)
- [How to Compile](#how-to-compile)
- [Examples](#examples)
- [Flowchart](#flowchart)
- [Authors](#authors)

## Description

This project is an implementation of the `printf` function in C.
The `printf` function is used for formatted output to the console.
The goal is to mimic the functionality of the standard `printf` function found in the C standard library.

## Features

- Supports various format specifiers like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%o`, `%p`, and more.
- Handles width and precision specifiers.
- Supports the `%%` escape sequence.
- Allows custom conversion specifiers through function pointers.

## Usage
To use the `_printf` function, include the "main.h" header in your C program and call the function as follows:

```c
#include "main.h"
/**
 * main - entry point
 * Return: 0 on success
 */

int main() {
    _printf("Hello, %s!\n", "world");
    return 0;
}
```

## Functionality

The custom \_printf function replicates the behavior of the standard printf function in C. It accepts a format string and variable arguments, formats the output according to the format string, and prints it to the standard output.

## How to Compile

To compile your program with '\_printf', you use the following command

```c
gcc -o my_program my_program.c _printf.c
```

## Example

``` c
_printf("Hello, %s!\n", "world");
_printf("The answer is %d.\n", 05);
_printf("Hexadecimal: %x\n", 130);
```

## Flowchart


## General Requirement by ALX

	- Allowed editors: vi, vim, emacs
	- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	- All your files should end with a new line
	- A README.md file, at the root of the folder of the project is mandatory
	- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	- You are not allowed to use global variables
	- No more than 5 functions per file
	- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	- The prototypes of all your functions should be included in your header file called main.h
	- Don’t forget to push your header file
	- All your header files should be include guarded
	- Note that we will not provide the \_putchar function for this project

## Authors

Okpako Evi,
Emmanuel Akalo