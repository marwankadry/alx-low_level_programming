#include "main.h"

/**
 * _strspn - gets the length of a prefis substring.
 *
 * @a: string
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *a, char *accept)
{
unsigned int mkr, rkm;


for (mkr = 0; a[mkr] != '\0'; mkr++)
{
	for (rkm = 0; accept[rkm] != a[mkr]; rkm++)

	{
			if (accept[mkr] == '\0')
				return (mkr);
}
}
	return (mkr);
}
