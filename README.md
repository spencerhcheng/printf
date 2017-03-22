![printf](http://i.imgur.com/4IkNJWt.jpg)
# 0x10. C - printf

#COLLABORATORS
Willis Lau - github: `lauwillis1991`
Spencer Cheng - github: `spencerhcheng`

## GOAL
The goal of this project is to:
* [ ] -- implement our own printf function
* [ ] -- learn how printf works behind the scenes
* [ ] -- build a printf function that serves as a tribute to the built in stdio.h printf
* [ ] -- gain familiarity with structs, header files, indefinite arguments, etc...

## REQUISITES
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

## COMPILATION
The code for this project will be compiled with:
```c
gcc -Wall -Werror -Wextra -pedantic *.c
```
## TASKS
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
Man Page:
Documentation specifying general commands and type formats compatible with our printf.

File: 
```c
man_3_printf
```

# FUNCTIONS

* [ ] -- `int _putchar(va_list args);
* [ ] -- `int _putchar(va_list args);`
* [ ] -- `int convertArgs(char c, va_list args);`
* [ ] -- `int _printf(const char *format, ...);`
* [ ] -- `int print_string(va_list args);`
* [ ] -- `int reverse_string(va_list args);`
* [ ] -- `void print_us(unsigned int b);`
* [ ] -- `int print_integer(va_list args);`
* [ ] -- `int print_char(char c);`
* [ ] -- `int convert_binary(va_list args);`
