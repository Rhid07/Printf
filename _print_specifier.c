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
	unsigned int num1;

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
	case 'b':
	char_count += _print_binary((num1 = va_arg(arg_list, unsigned int)));
	break;
	case 'u':
	char_count += print_unsigned_int((num1 = va_arg(arg_list, unsigned int)));
	break;
	case 'o':
	char_count += print_octal((num1 = va_arg(arg_list, unsigned int)));
	break;
	case 'x':
	char_count += print_hex((num1 = va_arg(arg_list, unsigned int)), 0);
	break;
	case 'X':
	char_count += print_hex((num1 = va_arg(arg_list, unsigned int)), 1);
	break;
	case '%':
	char_count += _write_character('%');
	break;
	default:
	char_count += (_write_character('%'), _write_character(*format));
}
	return (char_count);
}
