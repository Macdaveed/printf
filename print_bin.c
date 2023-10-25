#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int x, y = 1, z;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((a << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			z = p >> (31 - x);
			_putchar(z + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
