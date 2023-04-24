#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *description - print single digit numbers
 *Return: always 0
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
