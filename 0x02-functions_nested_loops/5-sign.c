#include "main.h"
/**
 * print_sign - sign checker function
 * @n: variable in function
 * Return: 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else 
	{
		return (0);
	}
