#include "main.h"

/**
 * _print_char - function that print a character to stdout
 * @arg_lists: list of argument name
 * @char_printer: counter to character to be printed
 *
 * Return: printed character
**/

int _print_char(va_list arg_lists, int char_printer)
{
	char c = va_arg(arg_lists, int);

	_write(1, &c, 1);

	return (char_printer + 1);
}

