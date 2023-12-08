#include "main.h"

/**
 * print_unsigned_int - prints unsigned int to the stdout
 * @list: variadic list
 * Return: number of character printed
*/

int print_unsigned_int(va_list list)
{
	char *num = itoa(va_arg(list, unsigned int), 10);

	if (num == NULL)
		return (prints("(null)"));
	return (prints(num));
}
