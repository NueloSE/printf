#include "main.h"

/**
 * hexa_lower_handler - handles lower hexadecimal
 * @list: variadic varaible
 * Return: number of character printed
*/

int hexa_lower_handler(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);

	return (hexa_lower_print(num));
}

/**
 * hexa_lower_print - prints lower hexa_decimal
 * @val: the number
 * Return: number of character printed
*/

int hexa_lower_print(unsigned int val)
{
	int count = 0;

	if ((val / 16) > 0)
		count += hexa_lower_print(val / 16);
	if ((val % 16) < 10)
		count += _putchar('0' + (val % 16));
	else
		count += _putchar('a' + ((val % 16) - 10));
	return (count);
}
