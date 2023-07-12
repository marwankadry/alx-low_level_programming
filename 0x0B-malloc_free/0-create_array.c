#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char *create_array(unsigned int, char);

/**
 * *create_array - creates an array of chars.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
