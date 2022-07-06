#include "main.h"
/**
 * main - code to run
 * Description: checks for lowercase characters
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
