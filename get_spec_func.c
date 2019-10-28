#include "holberton.h"

/**
 * get_spec_func - identifiers correct print function using specifier character
 * @spec: specifier character
 *
 * Return: function
 */

int (*get_spec_func(char spec))(va_list)
{
	int i;

	spec_t type[] = {
		{"c", print_char},
/*		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		{"s", print_string},
		{"S", print_special_string},
		{"R", print_rot13}, */
		{"r", print_reverse},
/*		{"p", print_pointer}, */
		{"b", print_binary},
		{"u", print_unsigned},
/*		{"o", print_octal}, */
		{"x", print_lil_hex},
		{"X", print_big_hex},
		{NULL, NULL}
	};

	for (i = 0; type[i].op != NULL; i++)
	{
		if (spec == *type[i].op)
			return (type[i].f);
	}

	return (NULL);
}
