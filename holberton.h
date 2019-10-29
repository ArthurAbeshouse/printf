#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - A data type that stores functions
 * @op: char type
 * @f: function pointer
 */

typedef struct format
{
	char *op;
	int (*f)(va_list);
} spec_t;

int _putchar(char c);
int (*get_spec_func(char speec))(va_list);
int print_integer(va_list args);
int print_char(va_list c);
int print_binary(va_list bi);
int print_string(va_list s);
int print_lil_hex(va_list n);
int _printf(const char *format, ...);
int _puts(char *str);
int print_lil_hex(va_list arg);
int print_big_hex(va_list arg);
int print_reverse(va_list arg);
int print_unsigned(va_list arg);
int print_octal(va_list n);
int print_unsigned(va_list n);
int print_rot13(va_list n);
int print_percent(va_list n);

#endif
