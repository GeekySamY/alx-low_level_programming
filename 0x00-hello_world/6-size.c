#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 on successful execution
 */
int main(void)
{
char c;
int i;
long l;
long long ll;
float f;
printf("Size of Char: %lu byte(s)\n", sizeof(c));
printf("Size of Int: %lu byte(s)\n", sizeof(i));
printf("Size of Long: %lu byte(s)\n", sizeof(l));
printf("Size of Long Long: %lu byte(s)\n", sizeof(ll));
printf("Size of Float: %lu byte(s)\n", sizeof(f));
return (0);
}
