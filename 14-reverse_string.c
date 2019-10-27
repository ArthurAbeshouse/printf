#include "holberton.h"

/**
 * reverse_string - reverses a string
 * @s: String to reverse
 * Return: Never
 */

void reverse_string (char *s)
{
	if (*s)
	{
		reverse_string(s + 1);
		_putchar (*s);
	}
}
