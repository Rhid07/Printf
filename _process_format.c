#include "main.h"
/**
 * process_format - Handle format specifier and arguments
 * @args: The va_list of arguments
 * @count: A pointer to the count of characters printed
 * @curr: Pointer to the current position in format string
 **/

void process_format(va_list args, int *count, const char **curr)
{
	(*curr)++;

	switch (**curr)
	{
		case 'c':
			handle_char(args, count, curr);
			break;
		case 's':
			handle_string(args, count, curr);
			break;
		case '%':
			handle_percent(count, curr);
			break;
		default:
			handle_percent(count, curr);
			_write_character(**curr);
			(*count)++;
			(*curr)++;
			break;
	}
}


