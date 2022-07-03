#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 * Description: Prints all single digit of base 10
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
