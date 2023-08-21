#include "main.H"

/**
 * _print_char - Print a character.
 *
 * @arg_lists: The argument list containing the character to print.
 * @char_printer: The count of characters printed so far.
 *
 * Return: The updated count of characters printed.
 */
int _print_char(va_list arg_lists, int char_printer);

/**
 * _print_string - Print a string.
 *
 * @arg_lists: The argument list containing the string to print.
 * @char_printer: The count of characters printed so far.
 *
 * Return: The updated count of characters printed.
 */
int _print_string(va_list arg_lists, int char_printer);

/**
 * _printf - Print formatted data.
 *
 * @format: The format string.
 * ...: Additional arguments based on the format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...);


int _printf(const char *format, ...)
{
	int char_printer = 0;
	va_list arg_lists;

	va_start(arg_lists, format);

	while (*format)
	{
		if (*format != '%')
		{
			_write(1, format, 1);
			char_printer++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				_write(1, format, 1);
				char_printer++;
			}
			else if (*format == 'c')
			{
				char_printer = _print_char(arg_lists, char_printer);
			}
			else if (*format == 's')
			{
				char_printer = _print_string(arg_lists, char_printer);
			}
		}
		format++;
	}

	va_end(arg_lists);
	return (char_printer);
}

