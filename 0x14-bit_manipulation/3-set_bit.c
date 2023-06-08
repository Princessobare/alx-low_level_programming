#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: pointer to number to be changed
 * @index: bit index to be set to 1
 * Return: returns 1 on success, and on failure returns -0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
