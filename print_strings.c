#include "main.h"

/**
 * print_string - prints string to the stdout
 * @arg: a list of variable arguments
 * Return: the number of printed characters
*/

int print_strings(va_list arg)
{
	char *str = va_arg(arg, char *);
	
	if (str == NULL)
		return (prints("(nil)"));
	return (prints(str));
}

/**
 * print - prints a string to the stdout
 * @s: pointer to the sting
 * Return: the number of printed string
*/

int prints(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}
