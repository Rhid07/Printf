#include "main.h"
/**
 * _print_string - function to write a string to stdout
 * @str: The string to write
 *
 * Return: Number of characters written
 * This code conforms to the betty documentation style
 **/
int _print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		_write_character(*str);
		count++;
		str++;
	}

	return (count);
}

