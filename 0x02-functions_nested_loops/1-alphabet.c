#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z'
 * with each alphabet sequence followed by a newline character.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
