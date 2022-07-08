#include <stdio.h>

/**
 * main - the Fizz buzz test
 *
 * Return: 0
 */

int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 ==0)
			printf("fizzBuzz");
		else if (a % 3 == 0)
			printf("fizz");
		else if (a % 5 == 0)
			printf("buzz");
		else
			printf("%d", a);
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
