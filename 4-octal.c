#include "holberton.h"
/**
 * print_octal - Prints in octal
 * @n: Variable Passed in
 * Return: Always j
 */

int print_octal(va_list n)
{
	int i = 0, j = 0;
	char octalStore[48];
	unsigned int toOctal = va_arg(n, unsigned int);

	if (toOctal == 0)
	{
		octalStore[i] = (0 + '0');
		i++;
	}
	while (toOctal != 0)
	{
		octalStore[i] = (toOctal % 8) + '0';
		toOctal = toOctal / 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(octalStore[i]);
		j++;
	}
	return (j);
}
