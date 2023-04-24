#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *description - print alphabet lowercase in reverse order
 *Return: always 0
 */

int main(void)
{
	char (ch);

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
