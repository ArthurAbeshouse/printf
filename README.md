# PRINTF

## Synopsis

This is the man project file and master branch of the recreation of the printf() function in c. This function has some of the functionality of printf, but not as many options

## Code Examples

Some example of a few of the formats that'll be able to be printed inside our function, _printf.

``c
_printf("%s", "I am string"); /* The 's' format specifier prints any string you input */
Output: I am string
``

This function is a default in the regular printf(), but in our _printf there are a couple custom conversions.

``c
_printf("%r", "Hello"); /* The 'r' format specifier prints any string, but in reverse */
Output: olleH
``

``c
int var = 2560
_printf("%i", var); /* The 'i' format specifier prints any integer value */
Output: 2560
``

Neither of these are part of the regular printf function in the standard library. These are the rest of the functions within _printf.

| Format Specifiers | Function Descriptions                                        |
| :---------------: | ------------------------------------------------------------ |
|        %d         | This format specifier prints out any integer value.          |
|        %i         | This format specifier prints out any integer value.          |
|        %c         | Prints out a single character that is passed into the function |
|        %s         | Prints out an entire string of characters that are passed into the function |
|        %b         | Takes an unsigned integer value and converts it into binary  |
|        %u         | Prints out an unsigned integer value                         |
|        %o         | Takes an unsigned integer and converts it into an octal value |
|        %x         | Receives an unsigned integer and prints out a hexadecimal number with lowercase letters |
|        %X         | Receives an unsigned integer and prints out a hexadecimal number with capital letters |
|        %r         | Reverses the string given to the function                    |
|        %R         | Rot13s the string given to the function                      |
|        %%         | Prints out a %                                               |



## Files and Functions

#### File 0: _printf.c

- _printf
  - This function does all the calling of the other functions in the program, as well as checks for any NULL values that may disrupt the program. The function searches for the format specifier %, then calls on "get_spec_fun" to find the exact format specifier.
  
#### File 0.5: get_spec_fun.c
  
  - get_spec_fun
    - This function takes a format specifier from _printf, and returns a function pointer to whatever function within it's local struct matches the format specifier.
	
#### File 1: Unsigned_Functions.c
	
	This file contains all the conversions for the unsigned values we are given:
	
	- print_lil_hex
		- This function prints an unsigned hexadecimal value, from an unsigned int with lowercase letters
	- print_big_hex
		- This functions prints a unsigned hexadecimal value with uppercase letters
	- print_unsigned
		- This function prints any unsigned integer it is given.
	- print_binary
		- This function converts an unsigned integer into a binary value
			
#### File 2: 0-Print_Strings.c
			
	This file contains every function that has to do with printing a string or character.
			
	- print_percent
		- Prints a percent sign when the format specifier is %%
	- print_char
		- Prints a single character that is passed into the function
	- print_string
		- Prints an entire string that is passed into the function
				  
#### File 3: 4-octal.c
	- print_octal
		- This function convers any unsigned integer into octal and prints out.
			
#### File 4: 14-reverse_strings.c
	- print_reverse
		- This function takes in any string, and return the same string in reverse.
					  
#### File 5: 15-rot13.c
	- print_rot13
		- Takes in ant string, and returns it with the letters shifted thirteen characters
						
#### File 6: print_integers.c
		- print_integer
			- This function prints out any integer value it is given, no matter the size

#### Other Files:
	- _putchar.c
		- contains _putchar, a function that prints a single character
	- holberton.h
		- The header file for the project, it contains the data type for the pointer functions, as well as function prototypes for every function used.
							  
## Contributors
		Arthur Abeshouse
		Ezra Nobrega`
