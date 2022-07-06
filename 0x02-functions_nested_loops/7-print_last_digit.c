#include "main.h"
/**
 * print_last_digit - function
 * @n: last digit of a number
 * Return: n
 */
int print_last_digit(int n)
{
	int integer = n % 10;

	if (integer < 0)
		integer *= -1;
	_putchar('0' + integer);
	return (integer);
}
