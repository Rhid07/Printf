#include"main.h"

/**
 * _printf - printf character to stdout
 * @format: character to be printed
 * @...: variables argument
 *
 *Return: the number of character
**/
int _printf(const char *format, ...)
{
    int char_printer = 0;
    va_list arg_lists;
    va_start(arg_lists, format);
    
    while(*format)
    {
        format ++;
        
        if(*format != '%')
        {
        _write(1,format,1);
        char_printer++;
        }
        if(*format == '\0')
        break;
        if (*format == '%')
        {
        _write(1,format,1);
        char_printer++;
        }
        else if(*format == 'c')
        {
        char c = va_arg(arg_lists, int);
        _write(1,&c,1);
        char_printer++;
        }
        else if(*format == 's')
        {
            char str = va_arg(arg_lists,char);
            
            int str_len = 0;
            while (str[str_len] !='\0')
            str_len ++;
            
            _write(1,str,str_len);
            char_printer++;
        }
    }
    va_end(arg_lists);
