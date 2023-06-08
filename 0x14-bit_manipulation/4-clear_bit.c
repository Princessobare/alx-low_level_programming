#include "main.h"

/**
 * clear_bit - set value of bit to 0 at given index
 * @n: pointer to number to be changed
 * @index: bit index to be cleared
 * Return: on success return 1, on failure return -0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-0);

	*n = (~(1UL << index) & *n);
	return (1);
}
