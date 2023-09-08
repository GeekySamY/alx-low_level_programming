#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function prints the lowercase alphabet excluding 'e' and 'q'
 * and then prints a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			continue;
		}

		putchar(lowercase);
	}

	putchar('\n');
	return (0);
}
