#include <main.h>
#include <unistd.h>

/**
 * _putchar - This function prints a character to stdout
 */
int _putchar(char c)
{
	write (1, &c, 1);
	return (0);
}
