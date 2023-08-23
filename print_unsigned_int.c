#include "main.h"

/**
 * print_unsigned_int - Prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 * This code conforms to the betty documentation style
 **/

int print_unsigned_int(unsigned int num)
{
	char buffer[20];
	int length;

	length = snprintf(buffer, sizeof(buffer), "%u", num);

	if (length < 0 || (size_t)length >= sizeof(buffer))
{
	return (0);
}

	return (_print_string(buffer));
}

/**
 * print_octal - A function that Prints an unsigned integer in octal format.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 * This code conforms to the betty documentation style
 **/

int print_octal(unsigned int num)
{
	char buffer[20];
	int length;

	length = snprintf(buffer, sizeof(buffer), "%o", num);

	if (length < 0 || (size_t)length >= sizeof(buffer))
{
	return (0);
}

	return (_print_string(buffer));
}

/**
 * print_hex - A function that Prints an unsigned integer
 * in hexadecimal format.
 * @num: The unsigned integer to be printed.
 * @uppercase: The Flag to indicate whether to use uppercase
 * letters in hexadecimal.
 *
 * Return: The number of characters printed.
 * This code conforms to the betty documentation style
 **/

int print_hex(unsigned int num, int uppercase)
{
	char buffer[20];
	const char *format = (uppercase) ? "%X" : "%x";
	int length;

	length = snprintf(buffer, sizeof(buffer), format, num);

	if (length < 0 || (size_t)length >= sizeof(buffer))
{
	return (0);
}

	return (_print_string(buffer));
}
