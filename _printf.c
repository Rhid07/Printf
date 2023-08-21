#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - A custom printf function
 * @format: The format string
 * @...: Variable arguments
 *
 * Return: The number of characters printed
 * excluding the null byte used to end output to strings
 * This code conforms to the betty documentation style
 **/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
{
	if (*format != '%')
{
	write(1, format, 1);
	count++;
}
	else
{
	format++;
	if (*format == 'c')
{
	char c = va_arg(args, int);

	count += write(1, &c, 1);
}
	else if (*format == 's')
{
	char *str = va_arg(args, char *);

	while (*str)
	count += write(1, str++, 1);
}
	else if (*format == '%')
	count += write(1, "%", 1);
}
	format++;
}

	va_end(args);
	return (count);
}
