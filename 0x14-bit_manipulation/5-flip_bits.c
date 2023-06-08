#include "main.h"

/**
 * flip_bits - count amount of bits to be changed
 * @n: beginning number
 * @m: next number
 * Return: returns amount of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, amount = 0;
	unsigned long int present;
	unsigned long int sole = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = sole >> i;
		if (present & 1)
			amount++;
	}

	return (amount);
}
