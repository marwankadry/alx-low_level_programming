#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 * should be printed
 */
void print_line(int n)
{
	int InChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (InChar = 1; InChar <= n; InChar++)
			_putchar('_');
		_putchar('\n');
	}
}
