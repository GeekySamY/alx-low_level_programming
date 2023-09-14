#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 14; num2++)
		{
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
