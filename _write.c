#include <unistd.h>
/**
 * _write_character - Helper function to write a single character to stdout
 * @c: The character to write
 *
 * Return: Number of characters written (always 1)
 * This code conforms to the betty documentation style
 **/

int _write_character(char c)
{
	write(1, &c, 1);
	return (1);
}
