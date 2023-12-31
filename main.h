#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 50

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <limits.h>

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
int binary_handler(va_list);
int print_unsigned_int(va_list);
int octal_print(va_list);
int hexa_upper_handler(va_list);

int hexa_lower_print(unsigned int);
int hexa_lower_handler(va_list);
int hexa_upper_print(unsigned int);

int binary_print(unsigned int);

#endif /*MAIN_H*/
