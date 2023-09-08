#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int hexa;
	char lower;

	for (hexa = 0; hexa < 10; hexa++)
	{
		putchar((hexa % 10) + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
