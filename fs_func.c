#include <stdarg.h>
#include "main.h"



/**
 * fs_character - function para putchar a base de lo que encuentre va_arg
 * por tipo char
 * @args: argumentos de va_list
 * Return: devuelve caracter
 */

int fs_character(va_list args)
{
	char x = va_arg(args, int);

	return (_putchar(x));

}

/**
 * fs_string - function para que a traves de putchar y
 * un while loop imprima la oracion
 * estamos guardando el int en len, que es la cantidad de char
 * @args: argumentos de va_list
 * Return: retornando cantidad de chars
 */

int fs_string(va_list args)
{
	char *string = va_arg(args, char *);
	int len = 0;

	while (string[len] != '\0')
	{
		_putchar(string[len]);
		len++;
	}
	return (len);
}

/**
 * fs_percentage - simplemente retorna un % como para
 * cumplir la funcion de escape
 * @args: argumentos de va_list, se incluye para cumplir con prototipo pero
 * no es necesario, por eso esta void
 * Return: retornando el %
 */
int fs_percentage(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

