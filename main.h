#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

int _write_character(char c);
void handle_char(va_list args, int *count, const char **curr);
void handle_string(va_list args, int *count, const char **curr);
void handle_percent(int *count, const char **curr);
void process_format(va_list args, int *count, const char **curr);
int _printf(const char *format, ...);

#endif
