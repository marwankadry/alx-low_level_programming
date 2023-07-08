#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destincation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size fo dest array*/
	while (dest[c]_
			c++;


	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
			for (i = 0; < n && src[i] != '\0'; i++)
			dest[c + i] = src[i];
			/*null terminate dest*/
			dest[c + i] = '\0';

			return (dest);
}
