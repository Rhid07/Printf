#include "main.h"
/**
 * handle_string - Handle the %s format specifier
 * @args: The va_list of arguments
 * @count: A pointer to the count of characters printed
 * @curr: Pointer to the current position in format string
 **/

void handle_string(va_list args, int *count, const char **curr)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_write_character(*str);
		(*count)++;
		str++;
	}
	(*curr)++;

}
