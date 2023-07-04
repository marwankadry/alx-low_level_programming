#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: lenght of src to be copied
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int krm;

	for (krm = 0; krm < n; krm++)
	{
		dest[krm] = src[krm];
	}
	return (dest);
}
