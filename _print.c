#include "main.h"
/**
 * _print - A custom print function to write to stdout
 * @str: The string to write
 *
 * Return: Number of characters written
 * This code conforms to the betty documentation style
 **/

int _print(const char *str)
{
	int counter = 0;

	while (*str)
	{
		counter += _write_character(*str);
		str++;
	}
	return (counter);
}
