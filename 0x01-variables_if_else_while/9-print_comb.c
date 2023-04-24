#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *description - print all possible combinations of single digit numbers
 *Return: always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
