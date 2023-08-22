#include "main.h"
/**
 * handle_percent - Handle the %% format specifier
 * @count: A pointer to the count of characters printed
 * @curr: Pointer to the current position in format string
 **/

void handle_percent(int *count, const char **curr)
{
        _write_character('%');
        (*count)++;
        (*curr)++;
}
