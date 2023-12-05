#include "main.h"

/**
 * print_char - prints a character to the stdout
 * @list: variable list of arguments
 * Return: number of char printed
*/

int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
