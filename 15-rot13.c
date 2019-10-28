#include "holberton.h"


void *rot13(const char *f, va_list str)
{
	char *stringTocheck;
	va_start(str, str);

	stringTocheck = va_arg(str, char*);
	int i, j;
	int count = 0;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; stringTocheck[i] != '\0'; i++)
		for (j = 0; input[j] != '\0'; j++)
			if (stringTocheck[i] == input[j])
			{
				stringTocheck[i] = output[j];
				_putchar(stringTocheck[i]);
				count++;
				break;	
			}

}
