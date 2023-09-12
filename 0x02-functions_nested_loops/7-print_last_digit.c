#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number to be checked.
 * Description: This function prints the last digit of the input number.
 * Return: The last digit of the input number.
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num >= 0)
	{
		lastDigit = num % 10;
	}
	else
	{
		lastDigit = ((num % 10) * -1);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
