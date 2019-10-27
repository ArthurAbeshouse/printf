#include "holberton.h"

int print_char(char c)
{
	int i = 0;

	_putchar(c);
	i++;
	return(i);
}

int print_string(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
