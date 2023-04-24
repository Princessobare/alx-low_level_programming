#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *description - print alphabet in lowercase and uppercase
 *Return: always 0
 */

int main(void)
{
	char (chl);
	char (chu);

	for (chl = 'a'; chl <= 'z'; chl++)
		putchar(chl);
	for (chu = 'A'; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');
	return (0);
}
