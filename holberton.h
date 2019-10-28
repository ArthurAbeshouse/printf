#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *op;
	int (*f)(va_list);
} spec_t;

int _putchar(char c);
int (*get_spec_func(char spec))(va_list)
int print_number(int args)

#endif
