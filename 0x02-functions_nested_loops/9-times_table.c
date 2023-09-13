#include "main.h"

/**
 * times_table - Prints the 9 times table from 0 to 9
 *
 * Description: Function iterates from 0 to 9 and prints
 * each multiplication result in the format "X x 9 = Y",
 * where X is the current number being multiplied and Y is the result
 * of the multiplication.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
