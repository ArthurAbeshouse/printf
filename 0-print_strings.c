#include "holberton.h"

int print_char(va_list c)
{
	va_start(c, c);
	char _chartoprint;
	_chartoprint = va_arg(c, char);
	int i = 0;

	_putchar(c);
	i++;
	return(i);
}

int print_string(va_list s)
{
	va_start(s, s);
	char *string_to_print;
	
	string_to_print = va_arg(s, char *);
	int i = 0;
	
	while (string_to_print[i] != '\0')
	{
		_putchar(string_to_print[i]);
		i++;
	}
	return (i);
}
