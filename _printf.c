#include "main.h"
/**
 * _printf - A custom printf function
 * @format: The format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 * This code conforms to the betty documentation style
 **/

int _printf(const char *format, ...)
{
	va_list arg_list;
	int char_count = 0;

	va_start(arg_list, format);

	while (*format)
{
	if (*format != '%')
{
	char_count += _write_character(*format);
}
	else
{
	format++;
	char_count += _print_specifier(format, arg_list);
}
	format++;
}
	va_end(arg_list);
	return (char_count);
}
