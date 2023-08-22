#include "main.h"
/**
 * _print_binary - A function that converts an unsigned int to its binary
 * representation and prints it
 * @num: The integer value to print
 *
 * Return: Number of characters printed
 * This function converts an unsigned int to binary and then prints it.
 * This program conforms to the betty documentation style
 **/

int _print_binary(unsigned int num)
{
	char buffer[33];
	int index = 31;

	buffer[32] = '\0';

	do
{
	buffer[index--] = (num & 1) ? '1' : '0';
	num >>= 1;
}
	while (num > 0 && index >= 0);

	return (_print_string(&buffer[index + 1]));
}

