#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int comb;

	for (comb = 0; comb < 10; comb++)
	{
		putchar((comb % 10) + '0');
		if (comb == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');

	}
	return (0);
}
