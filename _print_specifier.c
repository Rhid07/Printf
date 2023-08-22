#include "main.h"

/**
 * _print_specifier - Prints formatted data based on the format specifier.
 * @format: The format specifier and text to be printed.
 * @arg_list: The variable argument list containing data corresponding
 * to the format specifier.
 *
 * Return: The total number of characters printed.
 * This code conforms to the betty documentation style
 **/

int _print_specifier(const char *format, va_list arg_list)
{
	int char_count = 0;
	char c, *str;
	int num;

	switch (*format)
{
	case 'c':
	char_count += _write_character((c = va_arg(arg_list, int)));
	break;
	case 's':
	char_count += _print_string(
	(str = va_arg(arg_list, char *)) ? str : "(null)");
	break;
	case 'd':
	case 'i':
	char_count += print_int((num = va_arg(arg_list, int)));
	break;
	case '%':
	char_count += _write_character('%');
	break;
	default:
	char_count += (_write_character('%'), _write_character(*format));
}

	return (char_count);
}

