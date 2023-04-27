#include "main.h"
#include <unistd.h>

/**
 *print_numbers - Entry point
 *Return:0
 */

void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
