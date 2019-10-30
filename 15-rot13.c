#include "holberton.h"
/**
 * print_rot13 - prints a string after its been rot13ed
 * @str: String to rotate
 * Return: count of characters printed
 */
int print_rot13(va_list str)
{
	int count = 0;
	unsigned int i, j;
	char *stringTocheck;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	stringTocheck = va_arg(str, char *);

	if (stringTocheck == NULL)
		stringTocheck = "(null)";

	for (i = 0; stringTocheck[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == stringTocheck[i])
			{
				_putchar(output[j]);
				count++;
				break;
			}
		}
		if (!input[j])
		{
			_putchar(stringTocheck[i]);
			count++;
		}
	}
	return (count);
}
