#include "main.h"

/**
 * octal_print - prints number in octal format
 * @list: variadic list
 * Return: number of character printed
*/

int octal_print(va_list list)
{
	char *num = itoa(va_arg(list, long int), 8);

	if (num == NULL)
		return (-1);
	return (prints(num));
}
