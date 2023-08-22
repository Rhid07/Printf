#include "main.h"
/**
 * _printf - A custom printf function
 * @format: The format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 * This code conforms to the Betty documentation style
 **/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *curr = format;

	va_start(args, format);

	while (*curr)
	{
		if (*curr == '%')
		{
			process_format(args, &count, &curr);
		}
		else
		{
			_write_character(*curr);
			count++;
			curr++;
		}
	}

	va_end(args);
	return (count);
}







