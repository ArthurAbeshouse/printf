#include "holberton.h"
#include <string.h>
/**
 * print_reverse - reverses a string
 * @arg: String to reverse
 * Return: Never
 */

int print_reverse(va_list arg)
{
	int count = 0;
	int length = 0;
	char *string = va_arg(arg, char *);

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (string[length] != '\0')
	{
		length++;
		count++;
	}
	length--;

	while (length >= 0)
	{
		_putchar(string[length]);
		length--;
	}
	return (count);
}
