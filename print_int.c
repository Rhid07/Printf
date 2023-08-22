#include "main.h"

/**
 * print_int - A function that prints an integer value
 * @num: The integer value to print
 *
 * Return: Number of characters printed
 * This function converts the integer to a string and then prints it.
 * This program conforms to the betty documentation style
 **/

int print_int(int num)
{
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%d", num);

	if (length < 0 || (size_t)length >= sizeof(buffer))
{
	return (0);
}

	return (_print_string(buffer));
}
