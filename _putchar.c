#include <unistd.h>

/**
 * _putchar - imprimiendo caracter
 * @c: caracter
 * Return: putting char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
