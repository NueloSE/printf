#include "main.h"

/**
 * hexa_upper_handler - handles upper hexadecimal
 * @list: variadic list
 * Return: number of printed char
*/

int hexa_upper_handler(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);

	return (hexa_upper_print(num));
}

/**
 * hexa_upper_print - prints upper hexadecimal
 * @val: the number
 * Return: the number of character printed
*/

int hexa_upper_print(unsigned int val)
{
	int count = 0;

	if ((val / 16) > 0)
		count += hexa_upper_print(val / 16);
	if ((val % 16) < 10)
		count += _putchar('0' + (val % 16));
	else
		count += _putchar('A' + ((val % 16) - 10));
	return (count);
}
