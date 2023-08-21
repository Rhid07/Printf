#include <unistd.h>

/**
 * _write - A custom write function
 * @str: The string to write
 * @len: The length of the string
 *
 * Return: The number of characters written
 * This program conforms to the betty documentation style
 **/

int _write(const char *str, int len)
{
        return (write(1, str, len));
}
