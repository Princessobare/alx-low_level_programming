#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *description - print base sixteen in lowercase
 *Return: always 0
 */

int main(void)
{
	int n;
	int l;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
