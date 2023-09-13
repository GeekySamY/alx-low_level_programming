#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a newline.
 * @n: the number to be printed
 * Description: prints all natural numbers from n to 98
 * followed by a new line.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
			printf(",");
			printf(" ");
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d", n++);
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
