#include "main.h"

/**
 * handle_char - Handle the %c format specifier
 * @args: The va_list of arguments
 * @count: A pointer to the count of characters printed
 * @curr: Pointer to the current position in format string
 **/

void handle_char(va_list args, int *count, const char **curr)
{
	char c = va_arg(args, int);

	_write_character(c);
	(*count)++;
	(*curr)++;
}
