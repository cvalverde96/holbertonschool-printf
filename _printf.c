#include <stdarg.h>
#include "main.h"

/**
 * _printf - function para printf
 * @format: primer string dentro de printf
 * Return: string
 */

int _printf(const char *format, ...)
{
	int index, count = 0;

	va_list args;

	int (*s_f)(va_list);

	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				return (count);
			}

			s_f = get_format_specifier_func(format[index]);

			if (s_f != NULL)
			{
				count = count + s_f(args);
			}

			else
			{
				count = count + _putchar('%');
				count = count + _putchar(format[index]);
			}

		}

		else
		{
			count = count + _putchar(format[index]);
		}
	}
	return (count);
	va_end(args);
}

