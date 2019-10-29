#include "holberton.h"


int print_octal(va_list n)
{
	unsigned int toOctal = va_arg(n, unsigned int);

	int octalStore[48];
	int i = 0, count = 0;
	int j;

	while (toOctal != 0)
	{
		octalStore[i] = toOctal % 8;
		toOctal = toOctal / 8;
		i++;
	}

	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(octalStore[j]);
		count++;
	}
	return (1);
}
