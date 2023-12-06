#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 50

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_format - a secondary data structure
 * @specifier: a format specifier
 * @func: a function pointer
*/

typedef struct print_format
{
	char specifier;
	int (*func)(va_list);
} format_s;


int _printf(const char *format, ...);

int percent_handler(const char *, va_list, int *);
int handlers(const char *, va_list);

int prints(char *);
int _putchar(char);
long int _strlen(const char *);
char *itoa(long int, int);

int print_char(va_list);
int print_strings(va_list);
int print_base10(va_list);
int binary_print(va_list);

#endif /*MAIN_H*/
