#include <stdio.h>
#include <stdarg.h>

/**
 * print_binary - Prints the binary representation of an unsigned integer.
 * @n: The unsigned integer to be converted and printed.
 */
void print_binary(unsigned int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    int binary[32];  // Assuming 32-bit integer
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print the binary representation in reverse order
    for (int j = i - 1; j >= 0; j--) {
        putchar(binary[j] + '0');
    }
}

/**
 * my_printf - Custom printf function with 'b' specifier.
 * @format: The format string with optional specifiers.
 * @...: Additional arguments to be printed.
 *
 * Return: Always 0.
 */
int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1) == 'b') {
            unsigned int value = va_arg(args, unsigned int);
            print_binary(value);
            format += 2;  // Skip 'b' specifier
        } else {
            putchar(*format);
            format++;
        }
    }

    va_end(args);
    return 0;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void) {
    unsigned int num = 42;

    // Use the custom printf function with 'b' specifier
    my_printf("Binary representation of %u is %b\n", num, num);

    return 0;
}
