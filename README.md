# 0x10. C - printf
## Goal
The goal of this project is to:
* [ ] -- learn how printf works behind the scenes
* [ ] -- build a printf function that serves as a tribute to the built in stdio.h printf
* [ ] -- gain familiarity with structs, header files, indefinite arguments, etc...

## Requisites 
* [ ] -- no more than 5 functions per file
* [ ] -- include guarded header file named `holberton.h`
* [ ] -- Authorized functions & macros:
	* : `write`
	* : `malloc`
	* : `free`
	* : `va_start`
	* : `va_end`
	* : `va_copy`
	* : `va_arg`
	* : own `_putchar` function

## Compilation
The code for this project will be compiled with:

```c
gcc -Wall -Werror -Wextra -pedantic *.c
```

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
This function produces output according to the following format:
* [ ] -- returns the number of characters printed
* [ ] -- writes output to stdout
* [ ] -- `format` is a character string in the prototype
* [ ] -- handles the following conversion specifiers for characters, strings and data types:
	
	* : `c` : char
	* : `s` : string
	* : `%` : data type specifier

Prototype: 
```c 
int _printf(const char *format, ...);
```
### 1. Education is when you read the fine print. Experience is what you get if you don't 
This function handles the following conversion specifiers for integers:
	* : `d` : decimal
	* : `i` : integer

### 2. Just because it's in print doesn't mean it's the gospel
Man page for function

File: 
```c
man_3_printf
```

