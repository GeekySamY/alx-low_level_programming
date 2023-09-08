#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 o successful execution
 */
int main(void)
{
	int sindig;

	for (sindig = 0; sindig < 10; sindig++)
	{
		putchar((sindig % 10) + '0');

	}
	putchar('\n');
	return (0);
}
