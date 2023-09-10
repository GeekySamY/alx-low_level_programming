#include <stdio.h>

/**
 * main - Entry point of function
 *
 * Return: (0) on successful execution
 */
int main(void)
{
	int twod;
	int comb;

	for (twod = 0; twod < 9; twod++)
	{
		for (comb = twod + 1; comb <= 9; comb++)
		{
			putchar((twod % 10) + '0');
			putchar((comb % 10) + '0');

		if (twod == 8 && comb == 9)
		{
			continue;
		}


		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
