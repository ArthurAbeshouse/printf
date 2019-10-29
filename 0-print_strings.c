#include "holberton.h"
/**
 * print_char - prints a single character
 * @c: character to print
 * Return: Always 1
 */
int print_char(va_list c)
{
	int _chartoprint = va_arg(c, int);

	return (_putchar(_chartoprint));
}

/**
 * print_string - prints a string
 * @s: Stirng to print
 * Return: Number of characters printed
 */
int print_string(va_list s)
{
	int i = 0, count = 0;
	char *string_to_print;

	string_to_print = va_arg(s, char *);

	if (string_to_print == NULL)
		string_to_print = "(null)";

	while (string_to_print[i])
	{
		count += _putchar(string_to_print[i]);
		i++;
	}
	return (count);
}
/**
 * print_percent - prints a percent sign
 * @arg: Is unused
 * Return: Always 1
 */
int print_percent(va_list arg __attribute__((unused)))
{
	char percent = '%';

	_putchar(percent);

	return (1);
}
