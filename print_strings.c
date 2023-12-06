#include "main.h"

/**
 * print_strings - prints string to the stdout
 * @arg: a list of variable arguments
 * Return: the number of printed characters
*/

int print_strings(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		return (prints("(null)"));
	return (prints(str));
}

/**
 * prints - prints a string to the stdout
 * @s: pointer to the sting
 * Return: the number of printed string
*/

int prints(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
