#include "main.h"

/**
 * print_HEX_extra - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int print_HEX_extra(unsigned int num)
{
	int e;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (e = 0; e < counter; e++)
	{
		array[e] = tem % 16;
		tem /= 16;
	}
	for (e = counter - e; e >= 0; e--)
	{
		if (array[e] > 9)
			array[e] = array[e] + 7;
		_putchar(array[e] + '0');
	}
	free(array);
	return (counter);
}
