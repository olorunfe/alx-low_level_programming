#include "main.h"
/**
 * print_last_digit - function
 * @n: last digit of a number
 * Return: n
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar('0' + result);
	return (result);
}
