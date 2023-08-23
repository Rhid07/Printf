#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _print(const char *str);
int _print_string(const char *str);
int _printf(const char *format, ...);
int _write_character(char c);
int print_int(int num);
int _print_binary(unsigned int num);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, int uppercase);
int _print_specifier(const char *format, va_list arg_list);

#endif
