#include <stdio.h>
#include <math.h>

/**
 * is_prime - prints the largest prime factor of the number 612852475143
 * followed by a new line.
 *
 * Return: 0 Always
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				if (n == i)
				{
					printf("%ld\n", i);
					break;
				}
			d = n / i;
			n = d;
			}
		}
	return (0);
}
