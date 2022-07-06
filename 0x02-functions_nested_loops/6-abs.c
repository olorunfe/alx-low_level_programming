#include <stdio.h>
#include "main.h"
/**
 * _abs - function
 * @n: quarying
 * Return: n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		(n *= -1);
		return (n);
	}
}
