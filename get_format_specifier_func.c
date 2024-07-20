#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * get_format_specifier_func - function que retorna un function pointer
 * para hacer la operacion segun el struct
 * similar a la calculadora
 * @s: un caracter, que sera el format specifier
 * Return: function con relstuado, osea lo que va imprimir
 */
int (*get_format_specifier_func(char s))(va_list)
{
	fsfs gfs[] = {
		{"c", fs_character},
		{"s", fs_string},
		{"%", fs_percentage},
		{NULL, NULL}
	};

	int i = 0;

	while (gfs[i].fs != NULL)
	{
		if (*gfs[i].fs == s)
		{
			return (gfs[i].func);
		}
		i++;
	}
	return (NULL);
}
