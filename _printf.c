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
			if (*format == 'c')
			{
				char c = va_arg(arg_list, int);

				char_count += _write_character(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char *);

				char_count += _print_string(str);
			}
			else if (*format == '%')
			{
				char_count += _write_character('%');
			}
			else
			{
				char_count += _write_character('%');
				char_count += _write_character(*format);
			}
		}

		format++;
	}

	va_end(arg_list);
	return (char_count);
}
