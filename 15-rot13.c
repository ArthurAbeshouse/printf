#include "holberton.h"


int print_rot13(va_list str)
{	
	int len = 0, i, j;
	char *copy;
	char *stringTocheck;

	stringTocheck = va_arg(str, char *);

	while (stringTocheck[len++])
		;
	copy = malloc(sizeof(char *) * len);
	for (i = 0; i <= len; i++)
		copy[i] = stringTocheck[i];

	int count = 0;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; copy[i] != '\0'; i++)
		for (j = 0; input[j] != '\0'; j++)
			if (copy[i] == input[j])
			{
				copy[i] = output[j];
				_putchar(copy[i]);
				count++;
				break;
			}
	free(copy);
	return(count);
}
