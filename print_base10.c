#include "main.h"

/**
 * print_base10 - prints a number in base 10 format to the stdout
 * @list: variable list element
 * Return: number of character printed
*/

int print_base10(va_list list)
{
	char *ptr;
	long int num;
	int size = 0;

	num = va_arg(list, int);
	ptr = itoa(num, 10);
	if (ptr == NULL)
		size = prints(NULL);
	size = prints(ptr);

	return (size);
}
