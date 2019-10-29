#include "holberton.h"

/**
 * reverse_string - reverses a string
 * @s: String to reverse
 * Return: Never
 */

int print_reverse(va_list arg)
{
	char *copy;
	char *str_to_rev;
	char str[48];
	int a = 0, b = 0, i = 0, j = 0;

	str_to_rev = va_arg(arg, char *);

	while (str_to_rev[a++])
		;
	copy = malloc(sizeof(char *) * a);
	for (b = 0; b <= a; b++)
		copy[b] = str_to_rev[b];

	while (*(copy + i) != 0)
	{
		str[i] = *(copy + i);
		i++;
	}
	j = i - 1;
	i = 0;
	while (j >= 0)
	{
		*(copy + j) = str[i];
		j--;
		i++;
	}
	free(copy);
	return (i);
}
