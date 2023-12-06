#include "main.h"

/**
 * binary_print - prints a number in binary format
 * @list: variadic list of argument
 * Return: number of string printed
*/

int binary_print(va_list list)
{
	char *num = itoa(va_arg(list, int), 2);

	if (num == NULL)
		return (prints(NULL));
	return (prints(num));
}
