#include "holberton.h"

int print_binary(va_list bi)
{
	int a = 0, b = 0, num, arr[48];
	num = va_arg(bi, int);

	while (num > 0)
	{
		arr[a] = num % 2;
		num = num/2;
		a++;
	}
	for (int b = a - 1; b >= 0; b--)
		_putchar('0' + arr[b]);
	_putchar('0' + arr[b]);
	return(b);
}

int print_lil_hex(va_list arg)
{
	unsigned int numToConvert = va_arg(arg, unsigned int);

	char arrayHex[48];
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
			arrayHex[i] = temp + 87;
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
	return(count);
}

int print_big_hex(va_list arg)
{
        unsigned int numToConvert = va_arg(arg, unsigned int);

        char arrayHex[48];
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
        return(count);
}
