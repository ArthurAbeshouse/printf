#include "holberton.h"


void *rot13(char *str)
{
	int i, j;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; input[j] != '\0'; j++)
			if (str[i] == input[j])
			{
				str[i] = output[j];
				_putchar(str[i]);
				break;
			
			}

}
