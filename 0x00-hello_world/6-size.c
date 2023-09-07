#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 on successful execution
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of Char: %lu byte(s)\n", sizeof(c));
printf("Size of Int: %lu byte(s)\n", sizeof(i));
printf("Size of Long int: %lu byte(s)\n", sizeof(li));
printf("Size of Long Long int: %lu byte(s)\n", sizeof(lli));
printf("Size of Long float: %lu byte(s)\n", sizeof(f));
return (0);
}
