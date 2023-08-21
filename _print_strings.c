#include "main.h"
/**
 * _print_string - print strings to standard output
 * @arg_lists: argument list name
 * @char_printer: strings counter
 *
 * Return: strlen
**/

int _print_string(va_list arg_lists, int char_printer)
{
	char *str = va_arg(arg_lists, char *);

	int str_len = strlen(str);

	_write(1, str, str_len);

	return (char_printer + str_len);
}
