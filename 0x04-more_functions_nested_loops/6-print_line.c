#include "main.h"

/**
 * print_line - Print a line of n length
 * @n: Length of line
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		if (n > 0)
			_putchar('_');
		a++;
	}
	_putchar('\n');
}
