#include "main.h"

/**
 * handlers - prints the formated string
 * @string: the formated string
 * @arg: variable list of arguments
 * Return: the number of arguments printed
*/
int handlers(const char *string, va_list arg)
{
	int i, size = 0, sub = 0;

	for (i = 0; string[i]; i++)
	{
		if (string[i] == '%')
		{
			sub = percent_handler(string, arg, &i);
			if (sub == -1)
				return (-1);
			size += sub;
			continue;
		}
		_putchar(string[i]);
		size += 1;
	}
	return (size);
}

/**
 * percent_handler - handles format specifier
 * @string: formated string
 * @arg: variable list of arguments
 * @i: the position of the loop
 * Return: number of printed char on success. otherwise -1
*/
int percent_handler(const char *string, va_list arg, int *i)
{
	int j, size = 0, specifier_num;
	format_s array_spec[] = {
		{'c', print_char}, {'s', print_strings},
		{'d', print_base10}, {'i', print_base10},
		{'b', binary_handler}, {'u', print_unsigned_int},
		{'o', octal_print}, {'x', hexa_lower_handler},
		{'X', hexa_upper_handler},
	};
	*i = *i + 1;

	if (string[*i] == '\0')
		return (-1);

	if (string[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	specifier_num = sizeof(array_spec) / sizeof(array_spec[0]);
	for (j = 0; j < specifier_num; j++)
	{
		if (array_spec[j].specifier == string[*i])
		{
			size += array_spec[j].func(arg);
			return (size);
		}
	}
	_putchar('%');
	_putchar(string[*i]);
	return (2);
}
