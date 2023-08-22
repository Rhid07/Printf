#include <unistd.h>

/**
 * _write_character - Write a character to standard output
 * @c: The character to write
 *
 * Return: Number of characters written (1 for success, -1 for error)
 **/

int _write_character(char c)
{
	return (write(1, &c, 1));
}
