#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @num: The integer for which to find the absolute value.
 *
 * Return: The absolute value of 'n'.
 *
 * Description:
 * This function takes an integer 'n' and returns its absolute value, which is
 * the non-negative value representing the distance of 'n' from zero on the
 * number line.
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}
