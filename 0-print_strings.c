#include "holberton.h"

int print_char(va_list c)
{
	char _chartoprint;
	_chartoprint = va_arg(c, int);
	int i = 0;

	_putchar(_chartoprint);
	i++;
	return(i);
}

int print_string(va_list s)
{
	char *string_to_print;
	int i = 0;

	string_to_print = va_arg(s, char *);

	while (string_to_print[i] != '\0')
	{
		_putchar(string_to_print[i]);
		i++;
	}
	return (i);
}
