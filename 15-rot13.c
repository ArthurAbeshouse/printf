#include "holberton.h"
/**
 * print_rot13 - prints a string after its been rot13ed
 * @str: String to rotate
 * Return: count of characters printed
 */
int print_rot13(va_list str)
{
	int len = 0, i, j, count = 0;
	char *copy;
	char *stringTocheck;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	stringTocheck = va_arg(str, char *);
	if (stringTocheck == NULL)
		stringTocheck = "(null)";

	while (stringTocheck[len++])
		;
	copy = malloc(sizeof(char *) * len);
	for (i = 0; i <= len; i++)
	{
		copy[i] = stringTocheck[i];
	}

	for (i = 0; copy[i] != '\0'; i++)
		for (j = 0; input[j] != '\0'; j++)
			if (copy[i] == input[j])
			{
				copy[i] = output[j];
				_putchar(copy[i]);
				count++;
				if (copy[i + 1] == ' ')
					_putchar(' ');
				break;
			}
	free(copy);
	return (count);
}
