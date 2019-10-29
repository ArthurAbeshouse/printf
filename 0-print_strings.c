#include "holberton.h"
/**
 * print_char - prints a single character
 * @c: character to print
 * Return: Always 1
 */
int print_char(va_list c)
{
	char _chartoprint;

	_chartoprint = va_arg(c, int);

	_putchar(_chartoprint);
	return (1);
}
/**
 * print_string - prints a string
 * @s: Stirng to print
 * Return: Number of characters printed
 */
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
/**
 * print_percent - prints a percent sign
 * @arg: Is unused
 * Return: Always 1
 */
int print_percent(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

int print_special_string (va_list arg)
{

	char *string_to_print;
	int i = 0;

	string_to_print = va_arg(arg, char *);

	while (string_to_print[i] != '\0')
	{
		if ((string_to_print[i] < 32 && string_to_print[i] > 0) || string_to_print[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_big_hex(arg);
			i++;
		}
		else
		{
			_putchar(string_to_print[i]);
			i++;
		}
	}
	return (1);
}
