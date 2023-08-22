#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _print(const char *str);
int _print_string(const char *str);
int _printf(const char *format, ...);
int _write_character(char c);
#endif
