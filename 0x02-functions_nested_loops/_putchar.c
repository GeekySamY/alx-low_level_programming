#include "main.h"
#include <unistd.h>

/**
 * putchar prints character to stdout
 *
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
