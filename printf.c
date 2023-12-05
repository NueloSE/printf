#include "main.h"

/*
    File: printf.c

    Description:
    This file contains the implementation of the printf function, which is a standard
    output formatting function in the C programming language. The printf function
    allows the user to format and print text to the standard output (usually the console).
*/


int _printf(const char *format, ...)
{
	
	int size;

	if (format == NULL)
		return(-1);
	
	size = strlen(format);
	if (size <= 0)
		return (0);

	va_start(arg, format);
	size = handlers(format, arg);

	va_end(va_arg);

	return (size);
}
