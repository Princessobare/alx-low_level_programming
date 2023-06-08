#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be searched
 * @index: bit index
 * Return: on success return the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int thebit;

	if (index > 63)
		return (-1);

	thebit = (n >> index) & 1;

	return (thebit);
}
