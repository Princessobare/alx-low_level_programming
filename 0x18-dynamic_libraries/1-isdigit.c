#include "main.h"

/**
 *_isdigit - Checks for digits
 *@c: Character to be checked
 *Return: if character is digit, otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
