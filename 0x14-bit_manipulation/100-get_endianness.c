#include "main.h"

/**
 * get_endianness - check  machine size of endian
 * Return: returns 0 if large, returns 1  if small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
