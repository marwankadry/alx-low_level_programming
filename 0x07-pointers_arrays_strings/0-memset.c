#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to pull the constant
 * @b: constant
 * @n: man bytes to use
 * Return: pointar s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mrk;

	for (mkr = 0; n > 0; mkr++, n--)
	{
		s[mkr] = b;
	}

	return (s);
}
