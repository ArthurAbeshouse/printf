#include "holberton.h"


int print_address(va_list n)
{
	int address_to_print;
	int i = 0;

	address_to_print = va_arg(n, char);
	while (address_to_print)
	{
		putchar(&address_to_print);
		i++;
	}

}
