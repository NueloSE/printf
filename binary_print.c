#include "main.h"

/**
 * binary_handler - prints a number in binary format
 * @list: variadic list of argument
 * Return: number of string printed
*/

int binary_handler(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);

	return (binary_print(num));
}

/**
 * binary_print - prints to the stdout binary rep of unsigned int
 * @num: unsigned int
 * Return: number of character printed
*/

int binary_print(unsigned int num)
{
	int count = 0;

	if (num > 1)
		count += binary_print(num / 2);
	count += _putchar('0' + num % 2);
	return (count);
}
