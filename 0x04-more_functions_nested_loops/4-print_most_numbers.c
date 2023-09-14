#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9,
 * followed by a new line.
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n == 2 || n == 4)
			continue;

		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
