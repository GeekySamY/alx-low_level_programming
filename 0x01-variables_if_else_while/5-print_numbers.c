#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single numbers of base 10
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d\n", digit);
	}
	return(0);

}
