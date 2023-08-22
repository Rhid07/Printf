#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
 * print_char - Print a character to stdout
 * @c: The character to print
 *
 * Return: The number of characters printed (1)
 * This program conforms to the betty documentation style
 **/

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Print a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed
 * This program conforms to the betty documentation style
 **/

int print_string(const char *str)
{
	int count = 0;
	const char *temp = str;

	if (str == NULL)
	temp = "(null)";

	while (*temp)
{
	write(1, temp, 1);
	temp++;
	count++;
}
	return (count);
}

/**
 * print_int - Print an integer to stdout
 * @num: The integer to print
 *
 * Return: The number of characters printed
 * This program conforms to the betty documenattion style
 **/

int print_int(int num)
{
	int count = 0;
	int temp = num;
	int divisor = 1;

	while (divisor <= num / 10)
{
	divisor *= 10;
}

	if (num < 0)
{
	count += print_char('-');
	temp = -num;
}

	while (divisor > 0)
{
	char digit = (temp / divisor) + '0';

	count += print_char(digit);
	temp %= divisor;
	divisor /= 10;
}

	return (count);
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed (excluding null-terminator)
 * This program conforms to the betty documentation style
 **/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (*format)
{
	if (*format != '%')
{
	count += print_char(*format);
}
	else
{
	format++;
	if (*format == 'd' || *format == 'i')
{
	int num = va_arg(args, int);

	count += print_int(num);
}
}
	format++;
}

	va_end(args);
	return (count);
}
