#include "holberton.h"

int print_binary(va_list arg)
{
	unsigned int numToConvert;
	numToConvert = va_arg(arg, unsigned int);

    long result = 0, num_printed;
    unsigned int remainder; 
	int i = 1;
    while (numToConvert != 0)
    {
	        remainder = numToConvert % 2;
	       	numToConvert /= 2;
	        result += remainder*i;
			num_printed++;
			i *= 10;	

	}
	return (num_printed);
}

int print_lil_hex(va_list arg)
{
	int numToConvert;
	numToConvert = va_arg(arg, unsigned int);

	char arrayHex[999999999999999999];
	int i = 0;
	while (numToConvert != 0)
	{
		int temp = 0;
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
	int count = 0;
	for (int j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(arrayHex[j]);
		count++;
	}
}


