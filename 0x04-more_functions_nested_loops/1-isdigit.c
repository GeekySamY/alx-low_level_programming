#include "main.h"


/**
 * _isdigit - Checks if a character is digit.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
