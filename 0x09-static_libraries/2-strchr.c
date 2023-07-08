#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @k: pointer to put the conslant
 * @m: constant
 * Return: pointer to r
 */

char *_strchr(char *k, char m)
{
	int rkm;

	for (rkm = 0; k[rkm] >= '\0' ; rkm++)
	{
		if (k[rkm] == m)
		{
			return (k + rkm);
		}
	}

	return ('\0');
}
