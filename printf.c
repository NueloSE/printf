#include "main.h"

/**
 * _printf - parsing a formated string
 * @format: formatted string
 * Return: number of character printed
*/
int _printf(const char *format, ...)
{
	int size;

	va_list(arg);
	if (format == NULL)
		return (-1);
	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(arg, format);
	size = handlers(format, arg);

	va_end(arg);

	return (size);
}
