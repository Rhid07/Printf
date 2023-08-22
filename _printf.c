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
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
			count += _write_character(*format);
		else
		{
			format++;
			if (*format == 'c')
				count += _write_character(va_arg(args, int));
			else if (*format == 's')
				count += _print_string(va_arg(args, char *));
			else
			{
				count += _write_character('%');
				count += _write_character(*format);
			}
		}

		format++;
	}

	va_end(args);
	return (count);
}
