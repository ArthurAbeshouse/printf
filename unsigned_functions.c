#include "holberton.h"
/**
 * print_binary - receives an int to convert
 * @bi: Argument to convert
 * Return: b as the number of arguments printed
 */
int print_binary(va_list bi)
{
	int a = 0, b = 0, num, arr[48];

	num = va_arg(bi, int);

	while (num > 0)
	{
		arr[a] = num % 2;
		num = num / 2;
		a++;
	}
	for (b = a - 1; b >= 0; b--)
		_putchar('0' + arr[b]);

	return (b);
}
/**
 * print_lil_hex - prints hex with lowercase letters
 * @arg: Arguments passed to convert
 * Return: Count of characters printed
 */
int print_lil_hex(va_list arg)
{
	unsigned int numToConvert = va_arg(arg, unsigned int);
	char arrayHex[48];
	int i = 0, temp = 0, count = 0, j = 0;

	while (numToConvert != 0)
	{
		temp = 0;

		temp = numToConvert % 16;
		if (temp < 10)
		{
			arrayHex[i] = temp + 48;
			i++;
		}
		else
		{
			arrayHex[i] = temp + 87;
			i++;
		}
		numToConvert = numToConvert / 16;

	}
	count = 0;

	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(arrayHex[j]);
		count++;
	}
	return (count);
}
/**
 * print_big_hex - Prints an argument as hex with uppercase letters
 * @arg: Arguments to convert
 * Return: Amount of characters printed
 */
int print_big_hex(va_list arg)
{
	unsigned int numToConvert = va_arg(arg, unsigned int);
	char arrayHex[48];
	int i = 0, temp = 0, count = 0, j = 0;

	while (numToConvert != 0)
	{
		temp = 0;

		temp = numToConvert % 16;
		if (temp < 10)
		{
			arrayHex[i] = temp + 48;
			i++;
		}
		else
		{
			arrayHex[i] = temp + 55;
			i++;
		}
		numToConvert = numToConvert / 16;
	}
	count = 0;

	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(arrayHex[j]);
		count++;
	}
	return (count);
}
/**
 * print_unsigned - prints an unsigned integer value
 * @arg: Arguments to print
 * Return: Amount of arguments printed
 */
int print_unsigned(va_list arg)
{
	int count = 0;
	unsigned int num = va_arg(arg, unsigned int);
	int digit, sum = 0, last;
	int divis = 1000000000;

	while (divis > 1)
	{
		digit = (num / divis) % 10;
		sum += digit;
		if (sum != 0)
		{
			_putchar(digit + '0');
			count++;
		}
		divis = divis / 10;
	}

	last = num % 10;
	_putchar(last + '0');
	count++;

	return (count);
}
