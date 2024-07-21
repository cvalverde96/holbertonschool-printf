#ifndef manin_h
#define manin_h

#include <stdarg.h>
#include <stddef.h>

/**
 * struct format_specifier_function_struct - estructura
 * unica que contiene char y function pointer
 * @fs: function specifier
 * @func: function pointer
 */

typedef struct format_specifier_function_struct
{
char *fs;
int (*func)(va_list);
} fsfs;

int fs_character(va_list args);
int fs_string(va_list args);
int fs_percentage(va_list args);
int fs_number(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int(*get_format_specifier_func(char s))(va_list);


#endif

