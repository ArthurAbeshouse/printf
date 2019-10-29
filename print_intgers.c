#include "holberton.h"

/**
 * print_integer - function to prints integers and decimals
 *
 * @args: int type
 * Return: return integer/decimal values
 */

int print_integer(va_list args)
{
	int digit, sum = 0, last;
	int num = va_arg(args, int);
	int divis = 1000000000;
	int counter = 0;
	unsigned int x;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		counter++;
	}
	x = num;
	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	while (divis > 1)
	{
		digit = (x / divis) % 10;
		sum += digit;
		if (sum != 0)
		{
			_putchar(digit + '0');
			counter++;
		}
		divis = divis / 10;
	}
	last = x % 10;
	_putchar(last + '0');
	counter++;

	return (counter);
}
