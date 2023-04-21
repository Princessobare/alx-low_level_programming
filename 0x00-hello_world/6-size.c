#include <stdio.h>

/**
 *main - serves as the entry point for the program
 *Return: return zero if no error, else return non-zero number
 */

int main(void)
{
        printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
        printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
