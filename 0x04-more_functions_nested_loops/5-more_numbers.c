#include "main.h"

/**
 * more_numbers - prints a set of numbers 10 times
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	b = 0;
	while (b < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
