#include "main.h"

/**
 * print_diagonal - Print n number of '\'s
 * @n: Number of '\'s to print
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int a, b;

	a = 0;
	if (n > 0)
	{
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
