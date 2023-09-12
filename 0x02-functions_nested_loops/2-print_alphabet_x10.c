#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet from 'a' to 'z' ten times
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z' ten times,
 * with each alphabet sequence followed by a newline character.
 */
void print_alphabet_x10(void) /* prints alphabet 10x */
{
	char newline;
	char alphabet;

	for (newline = 0; newline <= 10; newline++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
		_putchar('\n');
	}
}
