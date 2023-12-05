#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct print_format{
	char specifier;
	int (*func)(va_list);
} format_s;


int _printf(const char *format, ...);
int _putchar(char);
int percentage_handler(char *, va_list, int *);
int print_char(char );
int handler(char *, va_list);

#endif /*MAIN_H*/
