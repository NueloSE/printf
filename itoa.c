#include "main.h"

/**
 * itoa - convert an int to an array
 * @num: the int
 * @base: the base to be converted to
 * Return: pointer to the array
*/

char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buf[BUFSIZE];
	char *ptr, sign = 0;
	unsigned long n = num;

	ptr = &buf[49];
	*ptr = '\0';

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	while (n != 0)
	{
		*(--ptr) = array[n % base];
		n = n / base;
	}
	if (sign)
	{
		*--ptr = sign;
	}
	return (ptr);
}
