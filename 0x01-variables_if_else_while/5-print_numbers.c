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
	int sd;

	for (sd = 0; sd < 10; sd++)
		printf("%d", sd);
	printf("\n");
	return (0);
}
