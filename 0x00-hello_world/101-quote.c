#include <stdio.h>
#include <unistd.h>

/**
 *main - serves as the entry point for the program
 *Return: return 1 if no error, else return zero
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
