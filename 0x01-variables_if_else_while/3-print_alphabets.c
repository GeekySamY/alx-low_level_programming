#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on successful execution
 */
int main(void)
{
	char lowercase;
	char UPPERCASE;

	lowercase = 'a';
	UPPERCASE = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (UPPERCASE <= 'Z')
	{
		putchar(UPPERCASE);
		UPPERCASE++;
	}

	putchar('\n');
	return (0);
}
