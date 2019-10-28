#include "holberton.h"


int reverse_string(va_list n)
{
	char *string_to_reverse;
	va_start(n, n);
	string_to_reverse = va_arg(n, char *)
	
	if(n)
	{
		reverse_string(string_to_reverse + 1);
		putchar(*string_to_reverse);
	}
}
