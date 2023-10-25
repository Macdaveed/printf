#include "main.h"

/**
 * print_t - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_t(va_list val)
{
	char a;

	a = va_arg(val, int);
	_putchar(a);
	return (1);
}
