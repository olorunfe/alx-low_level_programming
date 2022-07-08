#include "main.h"

/**
 * more_numbers - prints a set of numbers 10 times
 * @c: variable
 * @i: looping variable
 * Return: void
 */

void more_numbers(void)
{
	char c;
	int i = 0;
	for (c = '0'; c <= '14'; c++)
		if (i < 10; i++)
			_putchar(c);
	_putchar('\n');
}
