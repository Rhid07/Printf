#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <limit.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _write(const char *str, int len);
int _print_char(va_list arg_lists, int char_printer);
int _print_string(va_list arg_lists, int char_printer);

#endif
