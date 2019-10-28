#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *op;
	int (*f)(va_list);//, const char *fmt);
} spec_t;

int _putchar(char c);
int (*get_spec_func(char speec))(va_list);
int print_number(int args);
int print_char(va_list c);
int print_binary(va_list bi);
int print_string(va_list s);
int print_lil_hex(va_list n);
int _printf(const char *format, ...);
void _puts(char *str);
int print_lil_hex(va_list arg);
int print_big_hex(va_list arg);
int print_reverse(va_list arg);
int print_unsigned(va_list arg);

#endif
