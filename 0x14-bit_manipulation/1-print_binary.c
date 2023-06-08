#include "main.h"

/**
 * print_binary - print binary that is same as decimal
 * @n: integer to be printed
 */

void print_binary(unsigned long int n)
{
	int i, bold = 0;
	unsigned long int loud;

	for (i = 63; i >= 0; i--)
	{
		loud = n >> i;

		if (loud & 1)
		{
			_putchar('1');
			bold++;
		}
		else if (bold)
			_putchar('0');
	}
	if (!bold)
		_putchar('0');
}
