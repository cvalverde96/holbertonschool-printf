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

	if (string == NULL)
	{
		string = "(null)";
	}

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

/**
 * fs_number - function para validar un numero y poder imprimilo como string
 * @args: argumentos de va_list,
 * Return: retornando la cantidad de caracters
 */

int fs_number(va_list args)
{
	int numero = va_arg(args, int);
	int count = 0;
	char buffer[12];
	int i = 0;
	unsigned int numero_absoluto;

	if (numero < 0)
	{
		count = count + _putchar('-');
		numero_absoluto = -numero;
	}
	else
	{
		numero_absoluto = numero;
	}

	if (numero_absoluto == 0)
	{
		count = count + _putchar('0');
		return (count);
	}

	while (numero_absoluto != 0)
	{
		buffer[i++] = (numero_absoluto % 10) + '0';
		numero_absoluto = numero_absoluto / 10;
	}

	for (i--; i >= 0; i--)
	{
		count = count + _putchar(buffer[i]);
	}

	return (count);
}
