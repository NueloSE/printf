#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - computes the length of a string
 * @s: the string
 * Return: the length of a s
*/

long int _strlen(const char *s)
{
	long int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
