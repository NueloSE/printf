#include "main.h"

int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}