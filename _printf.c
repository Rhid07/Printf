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
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			count += _write_character(*format);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += _write_character(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += _print_string(str);
			}
			else if (*format == '%')
			{
				count += _write_character('%');
			}
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
