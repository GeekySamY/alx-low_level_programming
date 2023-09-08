#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char alphar;

	for (alphar = 'z'; alphar >= 'a'; alphar--)
	{
		putchar(alphar);
	}
	putchar('\n');
	return (0);
}
